/*
Enter number of Rows: 3
Enter number of Columns: 6
* * * * * *
* * * * * *
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
    { // outer loop -> no of rows
        for (int j = 1; j <= c; j++)
        { // inner loop -> no of columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}