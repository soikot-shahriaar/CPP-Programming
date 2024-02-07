// recursive function to print 1 to n (increasing)

#include <iostream>
using namespace std;

void increasing(int n)
{
    if (n == 0)
        return;

    increasing(n - 1); // Recursive call
    cout << n << endl;

    return;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    increasing(n);
    return 0;
}