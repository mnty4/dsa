#include <vector>
#include "missing.h"
#include <set>
#include <iostream>

// When the input vector is of size n
// you are guaranteed that it contains all
// of the integers 0, 1, 2, ..., n except for one.
// The goal of whoIsMissing is to return the missing number
int whoIsMissing(const std::vector<int>& vec) {
    std::set<int> ordered;

    for (int i = 0; i < vec.size(); ++i) {
        ordered.insert(vec.at(i));
    }
    for (int i = 0; i < ordered.size(); ++i) {
        if (ordered.find(i) == ordered.end()) {
            return i;
        }
    }
    return *ordered.rbegin() + 1;
}