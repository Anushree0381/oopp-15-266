#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Elements are:\n";

    for (auto num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}