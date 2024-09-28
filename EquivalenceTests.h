#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        testMixedIntegers();
        testBigPositiveIntegers();
        testBigNegativeIntegers();
        testZerosIntegers();
        testSpecialIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    // Add other test functions here
    void testMixedIntegers() {
        Addition addition;
        if (addition.add(-4, 6) != 2) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testZerosIntegers() {
        Addition addition;
        if (addition.add(0, -5) != -5) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testBigPositiveIntegers() {
        Addition addition;
        if (addition.add(261378, 382923) != 644301) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void testBigNegativeIntegers() {
        Addition addition;
        if (addition.add(-821324, -4390) != -825714) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void testSpecialIntegers() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }
};