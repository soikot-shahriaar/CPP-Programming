// Swap 2 numbers without using a third variable

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;

    cout << "Before Swapping:\n a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping:\n a = " << a << ", b = " << b << endl;

    return 0;
}