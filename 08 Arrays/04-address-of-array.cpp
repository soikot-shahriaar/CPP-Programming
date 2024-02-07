// The elements of an array are stored in contiguous memory locations
// The address of the array itself is the same as the address of its first element.

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    return 0;
}