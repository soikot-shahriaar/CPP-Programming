// Print Zigzag
// Input Output
//  1    1 1 1
//  2    2 1 1 1 2 1 1 1 2
//  3    3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

#include <iostream>
using namespace std;

void zigzag(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    zigzag(n - 1);
    cout << n << " ";
    zigzag(n - 1);
    cout << n << " ";
    return;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    zigzag(n);
    return 0;
}