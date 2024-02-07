// recursion to calculate the nth element of the Fibonacci series.

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter nth : ";
    cin >> n;

    cout << "The " << n << "th element of the Fibonacci series is: " << fibonacci(n);

    return 0;
}