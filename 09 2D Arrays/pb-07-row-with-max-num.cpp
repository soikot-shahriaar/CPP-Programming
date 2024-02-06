// Given a matrix having 0-1 only, find the row with the maximum number of 1’s.

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of Rows: ";
    cin >> r;
    cout << "Enter the number of Columns: ";
    cin >> c;

    cout << "Enter the elements of the binary matrix (0 or 1):" << endl;
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];
    }

    int maxOnesCount = 0;
    int maxOnesRow = 0;

    for (int i = 0; i < r; i++)
    {
        int onesCount = 0;
        for (int j = 0; j < c; j++)
        {
            onesCount += matrix[i][j];
        }
        cout << "Number of 1's in row " << i << " is " << onesCount << endl;
        if (onesCount > maxOnesCount)
        {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }
    cout << "Row with the maximum number of 1's is " << maxOnesRow + 1 << endl; // Adding 1 to convert to 1-based index
    cout << "Maximum number of 1's is " << maxOnesCount << endl;

    return 0;
}
