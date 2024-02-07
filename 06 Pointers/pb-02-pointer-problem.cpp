// Write a program having a variable i.
// Print the address of i.
// Pass this variable to a function and print its address.
// Are these addresses same?

#include <iostream>
using namespace std;

void printAdd(int a)
{
    cout << "The address of variable a is " << &a << endl;
}

int main()
{
    int i = 111;
    cout << "The value of variable i is " << i << endl;
    printAdd(i);
    cout << "The address of variable i is " << &i << endl;
    return 0;
}
// these addresses are not same.