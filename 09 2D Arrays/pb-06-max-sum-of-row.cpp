// Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of Rows: ";
    cin >> r;
    cout << "Enter the number of Columns: ";
    cin >> c;

    cout << "Enter the elements of the matrix:" << endl;
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> matrix[i][j];
    }

    int maxSum = 0;
    int maxRow = 0;

    for (int i = 0; i < r; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
        {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    cout << "Maximum sum is " << maxSum << endl;
    cout << "Row number having the maximum sum is " << maxRow + 1 << endl; // Adding 1 to convert to 1-based index

    return 0;
}

