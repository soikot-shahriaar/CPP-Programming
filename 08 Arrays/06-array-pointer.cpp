// Array is a Pointer
// First index of array is a Pointer
// int *ptr = &arr[0];
// int *ptr = arr;

// Traverse an Array
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    // input
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i << ": ";
        cin >> numbers[i];
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i << " output = " << numbers[i] << endl;
    }
    return 0;
}