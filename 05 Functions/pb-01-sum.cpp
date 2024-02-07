// Calculate sum of two integer numbers using function

#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int sum = add(a, b);
    cout << "Sum of two integers is " << sum << endl;

    return 0;
}