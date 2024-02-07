// /*
// Enter number of Rows: 5
// *
// * *
// * * *
// * * * *
// * * * * *
// */

#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of Rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    { // no of rows
        for (int j = 1; j <= i; j++)
        { // no of columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}