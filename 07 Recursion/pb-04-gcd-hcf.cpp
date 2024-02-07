// the greatest common divisor (GCD) of two numbers using recursion
// Euclidean algorithm for GCD

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}