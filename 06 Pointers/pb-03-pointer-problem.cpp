// Write a program to change the value of a variable to ten times its current value.
// Write a function and pass the value by reference.

#include <iostream>
using namespace std;

void multiTen(int *num)
{
    *num = (*num) * 10;
}

int main()
{
    int num = 10;
    cout << "Original Value: " << num << endl; // 10

    multiTen(&num);

    cout << "Value after Multiplication: " << num << endl; // 100

    return 0;
}