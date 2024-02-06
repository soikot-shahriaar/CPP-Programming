// Write a Program to print reverse of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Reversed number is " << rev;
    return 0;
}
