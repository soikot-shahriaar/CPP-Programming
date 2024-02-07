// Display this Geometric Progression: 3,12,48,.. upto n terms

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int gp = 3;
    for (int i = 0; i < n; i++)
    {
        cout << gp << " ";
        gp *= 4;
    }
    return 0;
}