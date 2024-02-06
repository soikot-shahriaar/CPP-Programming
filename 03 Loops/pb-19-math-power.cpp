// Two numbers are entered through the keyboard.
// Write a program to find the value of one number raised to the power of another.

#include <iostream>
// #include <cmath>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    int power = 1;
    for (int i = 1; i <= b; i++)
        power = power * a;

    cout << a << " to the power " << b << " is " << power;
    return 0;
}