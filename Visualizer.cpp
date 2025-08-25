#include "Visualizer.h"
#include <iostream>
#include <chrono>
#include <thread>

// Show the array in console using '#' characters
void Visualizer::display(const std::vector<int>& data, int highlight1, int highlight2) {
    // Clear the screen before printing the next frame
    #ifdef _WIN32
        system("cls");   // Windows
    #else
        system("clear"); // Linux/Mac
    #endif

    for (int i = 0; i < data.size(); i++) {
        // Highlight the currently compared elements
        if (i == highlight1 || i == highlight2) {
            std::cout << "[" << std::string(data[i], '#') << "]\n";
        } else {
            std::cout << " " << std::string(data[i], '#') << "\n";
        }
    }
    std::cout.flush();
}

// Pause execution for given milliseconds
void Visualizer::delay(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
