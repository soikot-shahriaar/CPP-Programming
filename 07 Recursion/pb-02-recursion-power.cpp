// Write a recursive program to find the value of one number raised to the power of another.

#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    int p = power(a, b);
    cout << a << " to the power " << b << " is " << p;

    return 0;
}