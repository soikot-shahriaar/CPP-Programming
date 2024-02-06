// reversing part of an array

#include <iostream>
using namespace std;

void reverse(int arr[], int s_i, int e_i)
{
    for (int i = s_i, j = e_i; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    reverse(arr, 1, 4);

    for (int i = 0; i <= 6; i++)
        cout << arr[i] << " ";

    return 0;
}
