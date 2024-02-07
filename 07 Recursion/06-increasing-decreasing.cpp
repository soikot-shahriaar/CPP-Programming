// recursive function to print 1 to n (increasing) and also n to 1 (decreasing)

#include <iostream>
using namespace std;

void printing(int n)
{
    if (n == 0)
        return;

    cout << n << endl; // Print number
    printing(n - 1);   // Recursive call
    cout << n << endl; // Print number

    return;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    printing(n);
    return 0;
}