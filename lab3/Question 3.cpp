#include <iostream>
using namespace std;

class Calculator {
public:

    // Inline function
    inline int square(int x) {
        return x * x;
    }

    // Default arguments
    int add(int a, int b = 0) {
        return a + b;
    }

    // Function overloading
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator c;

    // Inline function
    cout << "Square of 5 = " << c.square(5) << endl;

    // Default argument
    cout << "Add with two values = " << c.add(10, 20) << endl;
    cout << "Add with one value = " << c.add(10) << endl;

    // Function overloading
    cout << "Integer multiplication = "
         << c.multiply(5, 4) << endl;

    cout << "Double multiplication = "
         << c.multiply(2.5, 4.0) << endl;

    return 0;
}