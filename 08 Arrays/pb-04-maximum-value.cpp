// Find the maximum value out of all the elements in the array.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {33, -12, 45, -122, 90, 98, 99, 121};

    // int max = arr[0];
    int max = INT_MIN; // smallest value in integer
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Max Value is " << max;
    return 0;
}
