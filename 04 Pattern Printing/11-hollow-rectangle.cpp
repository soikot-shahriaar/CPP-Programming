/*
Enter number of Rows: 4
Enter number of Columns: 6
* * * * * *
*         *
*         *
* * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of Rows: ";
    cin >> r;
    cout << "Enter number of Columns: ";
    cin >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == r || j == c) // condition
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
