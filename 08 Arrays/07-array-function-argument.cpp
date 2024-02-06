// Arrays as Function Argument
// void printNumbers (int arr[], int n)
// or
// void printNumbers (int *arr, int n)

#include <iostream>
using namespace std;

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    printNumbers(arr, 6);
    return 0;
}