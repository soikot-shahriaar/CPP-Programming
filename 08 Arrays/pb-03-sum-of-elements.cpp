// Calculate the sum of all the elements of in the array.

#include <iostream>
using namespace std;

int main()
{
    int n; // array length
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the Numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Sum of the " << n << " Numbers = " << sum;
    return 0;
}
