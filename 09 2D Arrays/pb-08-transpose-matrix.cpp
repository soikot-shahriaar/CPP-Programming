// Write a program to Print the transpose of the matrix entered by the user.
// Leetcode - 867

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

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    int transpose[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            transpose[i][j] = matrix[j][i];
    }

    cout << "Transpose of the Matrix:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << transpose[i][j] << "\t";
        cout << endl;
    }
    
    return 0;
}