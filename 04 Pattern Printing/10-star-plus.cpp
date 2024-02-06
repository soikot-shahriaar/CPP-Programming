/*
Enter number of Rows: 5
    *
    *
* * * * *
    *
    *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = n / 2 + 1; // 3 -> 2 // 5 -> 3
            if (i == a || j == a)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
