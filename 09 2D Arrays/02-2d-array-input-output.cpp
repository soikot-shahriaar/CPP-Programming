#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of Rows: ";
    cin >> r;
    cout << "Enter the number of Columns: ";
    cin >> c;

    cout << "Enter the elements of array:\n";
    int arr[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << "Printing the array elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
            
    cout << endl;
    return 0;
}

/*
Enter the number of Rows: 3
Enter the number of Columns: 2
Enter the elements of array:
1 2
3 4
5 6
Printing the array elements:
1 2 3 4 5 6 
*/