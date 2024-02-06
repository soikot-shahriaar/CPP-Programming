// Rotate the given array 'a' by k steps, where k is non-negative number.
// k can be greater than n as well where n is the size of array 'a'.

// // Steps:
// 1. k=k%n
// 2. reverse (arr,0,n-1)
// 3. reverse (arr,0,k-1)
// 4. reverse (arr,k,n-1)

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the number of rotation steps (k): ";
    cin >> k;

    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
