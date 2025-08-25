#ifndef VISUALIZER_H
#define VISUALIZER_H

#include <vector>

class Visualizer {
public:
    // Displays the array as bars in the console.
    // highlight1 & highlight2 are indices to "highlight" (like active elements being compared).
    static void display(const std::vector<int>& data, int highlight1 = -1, int highlight2 = -1);

    // Adds a delay (in milliseconds) between steps.
    static void delay(int ms);
};

#endif
