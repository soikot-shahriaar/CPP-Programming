// Write a function to compute the greatest common divisor of teo given numbers

// The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. It is also called the highest common factor (HCF).

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers:" << endl;
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "The GCD/HCF of " << a << " and " << b << " is: " << result << endl;
    return 0;
}