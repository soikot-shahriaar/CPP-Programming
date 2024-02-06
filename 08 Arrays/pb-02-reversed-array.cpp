// Given an array of numbers, print the numbers in reversed order

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter the numbers: " << endl;
    for (int i = 0; i <= 4; i++)
        cin >> arr[i];

    cout << "Numbers in reversed order is ";
    for (int i = 4; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}
