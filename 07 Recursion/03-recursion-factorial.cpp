// recursive function to print factorial of n

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n);
    return 0;
}