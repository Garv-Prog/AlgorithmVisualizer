#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <vector>
#include <string>

// Abstract base class for all algorithms
// This allows us to keep a collection of algorithms in the same menu.
class Algorithm {
public:
    // The algorithm will receive a vector of integers to process
    virtual void run(std::vector<int>& data) = 0;

    // Returns the name of the algorithm (e.g. "Bubble Sort")
    virtual std::string name() const = 0;

    // Virtual destructor (important for proper cleanup when using polymorphism)
    virtual ~Algorithm() = default;
};

#endif
