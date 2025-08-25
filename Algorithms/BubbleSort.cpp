#include "BubbleSort.h"
#include "../Visualizer.h"
#include <algorithm>  // for std::swap
#include <thread>
#include <chrono>
#include <iostream>

// Bubble Sort works by repeatedly swapping adjacent elements
// if they are in the wrong order.
// Visualization: we show the array after every swap/step.
void BubbleSort::run(std::vector<int>& data) {
    for (size_t i = 0; i < data.size(); i++) {
        for (size_t j = 0; j < data.size() - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
            }

            // Show the current state of the array
            Visualizer::display(data, j, j + 1);

            // Delay so the user can see it
            Visualizer::delay(100);
        }
    }
}
