#include <iostream>
using namespace std;

void square(int n)
{
    n = n * n;
    cout << "square is : " << n << endl;
}

void _square(int *n)
{
    *n = (*n) * (*n);
    cout << "square is : " << *n << endl;
}

int main()
{
    int number = 4;

    // call by value
    cout << "number is : " << number << endl;
    square(number);

    // call by reference
    cout << "number is : " << number << endl;
    _square(&number);
    return 0;
}