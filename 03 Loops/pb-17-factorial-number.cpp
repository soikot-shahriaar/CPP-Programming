// Print the factorials of first 'n' numbers

// 5! = 5 × 4 × 3 × 2 × 1 = 120
// 4! = 4 × 3 × 2 × 1 = 24
// 3! = 3 × 2 × 1 = 6
// 2! = 2 × 1 = 2
// 1! = 1 × 1 = 1
// 0! = 1
// n! = n × (n - 1) × (n - 2) × ... × 3 × 2 × 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout << "Factorial of " << i << " is " << fact << endl;
    }
    return 0;
}