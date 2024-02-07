// Find the maximum element in a 2D array.

#include <iostream>
#include <climits>
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

    int max = INT_MIN;
    int max_i, max_j;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << "Maximum Value is " << max << endl;
    cout << "Index of Maximum Value is [" << max_i << "][" << max_j << "]" << endl;
    return 0;
}