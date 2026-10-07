#include <iostream>
using namespace std;

class Calculator {
public:
    // 1. Two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Three integers (different number of parameters)
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 3. Two doubles (different type of parameters)
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(10, 20) << endl;          // calls version 1
    cout << calc.add(10, 20, 30) << endl;      // calls version 2
    cout << calc.add(2.5, 3.5) << endl;        // calls version 3

    return 0;
}