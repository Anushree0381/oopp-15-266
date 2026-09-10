#include <iostream>
using namespace std;

void callByValue(int n)
{
    n = n + 10;
    cout << "Inside Call by Value: " << n << endl;
}

void callByReference(int &n)
{
    n = n + 10;
    cout << "Inside Call by Reference: " << n << endl;
}

void callByAddress(int *n)
{
    *n = *n + 10;
    cout << "Inside Call by Address: " << *n << endl;
}

int main()
{
    int num = 20;

    cout << "Original Value: " << num << endl;

    callByValue(num);
    cout << "After Call by Value: " << num << endl;

    callByReference(num);
    cout << "After Call by Reference: " << num << endl;

    callByAddress(&num);
    cout << "After Call by Address: " << num << endl;

    return 0;
}