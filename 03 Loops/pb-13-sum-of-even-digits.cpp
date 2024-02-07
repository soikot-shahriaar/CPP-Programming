// Write a Program to print sum all the even digits of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int lastDigit = 0;
    int sum = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0)
            sum = sum + lastDigit;
        n = n / 10;
    }
    cout << "Sum of even digits: " << sum;
    return 0;
}