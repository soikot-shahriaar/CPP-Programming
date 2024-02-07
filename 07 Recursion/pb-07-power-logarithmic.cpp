// Write a recursive program to find the value of one number raised to the power of another.
// Power Function (Logarithmic)

#include <iostream>
using namespace std;

int powerLog(int a, int b)
{
    if (b == 0)
        return 1;

    int x = powerLog(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}

int main()
{
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    int p = powerLog(a, b);
    cout << a << " to the power " << b << " is " << p;

    return 0;
}