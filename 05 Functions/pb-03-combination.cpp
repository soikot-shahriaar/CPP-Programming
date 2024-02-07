// Calculate the binomial coefficient using a factorial function
// the formula nCr = n! / (r! * (n - r)!)

#include <iostream>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
        fact = fact * i;
    return fact;
}

int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << "nCr = " << combination(n, r);
    return 0;
}