#include <iostream>
#include <vector>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "Visualizer.h"
#include "algorithms/Algorithm.h"
#include "algorithms/BubbleSort.h"

int main() {
    srand(static_cast<unsigned>(time(0)));

    // Generate some random numbers (15 bars, range 1–20)
    std::vector<int> data(15);
    for (auto &d : data) d = rand() % 20 + 1;

    // List of available algorithms
    std::vector<std::unique_ptr<Algorithm>> algorithms;
    algorithms.push_back(std::make_unique<BubbleSort>());

    // Show menu
    std::cout << "Choose an algorithm:\n";
    for (size_t i = 0; i < algorithms.size(); i++) {
        std::cout << i + 1 << ". " << algorithms[i]->name() << "\n";
    }

    int choice;
    std::cin >> choice;

    // Run chosen algorithm
    if (choice >= 1 && choice <= algorithms.size()) {
        algorithms[choice - 1]->run(data);
    } else {
        std::cout << "Invalid choice!\n";
    }

    return 0;
}
