#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int *x = &a;  // *int -> address of int
    int **y = &x; // **int -> address of *int

    // %d is to print value and %p is to print address
    cout << "a = " << a << endl;
    cout << "x = " << *x << endl;
    cout << "y = " << **y << endl;
    return 0;
}