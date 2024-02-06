/*
Enter number of Rows: 3
* * *
* *
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
        for (int j = 1; j <= n + 1 - i; j++)
        { // i + j = n + 1
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
