// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of Rows: ";
    cin >> r;
    cout << "Enter the number of Columns: ";
    cin >> c;

    cout << "Enter the elements of the array:" << endl;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    int l1, r1, l2, r2;
    cout << "Enter the coordinates (l1, r1) and (l2, r2) for the rectangle:" << endl;
    cout << "l1: ";
    cin >> l1;
    cout << "r1: ";
    cin >> r1;
    cout << "l2: ";
    cin >> l2;
    cout << "r2: ";
    cin >> r2;

    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
            sum += arr[i][j];
    }
    cout << "Sum of the rectangle is " << sum << endl;

    return 0;
}