// Multidimensional Arrays:
// While initializing a 2D Array:
// it is necessary to mention the second dimension (column),
// whereas the first dimension (row) is optional.

// Correct:
// int arr[2][3];  // int arr[][3];

// Correct:
// int arr[3][2] = {{1234,56},{1256,43},{1434,32}};
// int arr[3][2] = {1234,56,1256,43,1434,32};
// int arr[2][3] = {12,34,56,78,91,23};
// int arr[][3] = {12,34,56,78,91,23};

// Incorrect:
// int arr[2][];   // int arr[][];

#include <iostream>
using namespace std;

int main()
{
    // 1  2
    // 3  4

    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;

    int arr[2][2] = {{1, 2}, {3, 4}};

    cout << arr[1][1]; // 4

    return 0;
}
