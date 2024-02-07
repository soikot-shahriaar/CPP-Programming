// Pascal Triangle using the formula of Combination
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

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
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = combination(i, j);
            cout << iCj << " ";
        }
        cout << endl;
    }
    return 0;
}