// Count the number of elements in given array greater than a given number x.

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

    int x;
    cout << "Enter the number to be compared: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            count++;
    }

    cout << "Total " << count << " elements are greater than " << x << ".";

    return 0;
}
