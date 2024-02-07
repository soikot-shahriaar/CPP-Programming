// Write a recursive function to print sum of first n numbers

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Sum of 1 to " << n << " = " << sum(n);
    return 0;
}