/*
Enter number of Rows: 3
Enter number of Columns: 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
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
    { // no of rows
        for (int j = 1; j <= c; j++)
        { // no of columns
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
