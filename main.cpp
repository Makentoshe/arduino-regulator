#include <iostream>
#include "regulator/mean/int/IntMeanRegulator.h"

int main() {
    auto *regulator = new IntMeanRegulator(5);
    for (int i = 1; i <= 10; ++i) {
        auto a = regulator->regulate(i);
        std::cout << "Value: " << a << "\n";
    }
    return 0;
}