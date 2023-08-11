#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <signal.h>
#include <ncurses.h>
#include <sys/stat.h>

std::ofstream new_file;
bool terminateRequested = false;
void handleSignal(int signal) {
    if (signal == SIGTERM || signal == SIGINT) {
        // Close the file before termination
        new_file.close();
        exit(0);
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

    // Set terminal to non-blocking input
    struct termios term_settings;
    tcgetattr(STDIN_FILENO, &term_settings);
    term_settings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &term_settings);
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);

    char ch;
    while (true) {
        ssize_t n = read(STDIN_FILENO, &ch, 1);
        if (n > 0) {
            new_file.put(ch);
            new_file.flush();
        }

        // Check for termination signal
        if (terminateRequested) {
            break;
        }
    }

    // Restore terminal settings
    tcgetattr(STDIN_FILENO, &term_settings);
    term_settings.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &term_settings);

    // Cleanup
    new_file.close();
    return 0;
}