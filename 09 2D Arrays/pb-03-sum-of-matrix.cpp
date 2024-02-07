// Find the sum of a given matrix of r x c

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of Rows: ";
    cin >> r;
    cout << "Enter the number of Columns: ";
    cin >> c;

    cout << "Enter the elements of array:" << endl;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            sum = sum + arr[i][j];
    }
    
    cout << "The sum of the given matrix is: " << sum << endl;
    return 0;
}