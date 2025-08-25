#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Algorithm.h"
#include <string>
#include <vector>

// Bubble Sort algorithm implementation
class BubbleSort : public Algorithm {
public:
    void run(std::vector<int>& data) override;   // sorting logic
    std::string name() const override { return "Bubble Sort"; }
};

#endif
