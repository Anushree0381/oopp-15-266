#include <iostream>
using namespace std;

class Calculator {
public:
    inline int square(int x) {
        return x * x;
    }
    int add(int a, int b = 0) {
        return a + b;
    }
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator c;
    cout << "Square of 5 = " << c.square(5) << endl;
    cout << "Add with two values = " << c.add(10, 20) << endl;
    cout << "Add with one value = " << c.add(10) << endl;
    cout << "Integer multiplication = "
         << c.multiply(5, 4) << endl;

    cout << "Double multiplication = "
         << c.multiply(2.5, 4.0) << endl;

    return 0;
}