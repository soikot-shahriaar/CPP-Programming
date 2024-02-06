// Write a Program to print sum of digits of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n; // 45

    int lastDigit = 0;
    int sum = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}
