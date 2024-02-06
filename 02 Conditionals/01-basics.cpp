#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even Number" << endl;
        cout << "If Block Executed" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
        cout << "Else Block Executed" << endl;
    }
    return 0;
}