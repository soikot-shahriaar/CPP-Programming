// Write a program to print the value of a variable i
// Using the "pointer to pointer" type of variable.

#include <iostream>
using namespace std;

int main()
{
    int i = 396; // declare and initialize i
    int *ptr;
    int **ptr_ptr;

    ptr = &i;       // pointer to int
    ptr_ptr = &ptr; // pointer to pointer to int

    cout << "Value of i is " << **ptr_ptr << endl; // 396
    return 0;
}