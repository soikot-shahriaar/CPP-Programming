// Write a Program to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int number = num; // stores in number variable

    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Reversed number is " << rev << endl;

    cout << "Sum of number and its reverse is " << number + rev << endl;
    return 0;
}
