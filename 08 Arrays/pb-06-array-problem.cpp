// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed value by 10.

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

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
