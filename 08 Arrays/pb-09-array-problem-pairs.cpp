// Find the total number of pairs in the array whose sum is equal to the given value x.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sumEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sumEven += arr[i];
    }

    int sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            sumOdd += arr[i];
    }

    cout << "Difference is " << sumEven - sumOdd << endl;

    return 0;
}