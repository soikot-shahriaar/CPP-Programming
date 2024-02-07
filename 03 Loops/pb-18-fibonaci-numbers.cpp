// Print nth fibonacci number

// 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// f(0) = 0
// f(1) = 1
// f(n) = f(n-1) + f(n-2) for n >= 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int a = 1;
    int b = 1;
    int fibonacci = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        fibonacci = a + b;
        a = b;
        b = fibonacci;
    }
    cout << "The " << n << "th fibonacci is " << fibonacci << endl;
    return 0;
}