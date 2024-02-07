// Display this Geometric Progression - 100,50,25,.. upto n terms.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    float gp = 100.0;
    for (float i = 0; i <= n; i++)
    {
        cout << fixed << gp << " ";
        gp = gp / 2;
    }

    return 0;
}