// Write a program to reverse the array without using any extra array.

#include <iostream>
using namespace std;

void rev_arr(int arr[])
{
    int i = 0;
    int j = 6;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    rev_arr(arr);

    for (int i = 0; i <= 6; i++)
        cout << arr[i] << " ";

    return 0;
}
