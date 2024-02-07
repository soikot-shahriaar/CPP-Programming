// Write a program to print the address of a variable.
// Use this address to get the value of this variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "The address of variable a is " << ptr << endl;
    cout << "The value of variable a is " << *ptr << endl;
    return 0;
}