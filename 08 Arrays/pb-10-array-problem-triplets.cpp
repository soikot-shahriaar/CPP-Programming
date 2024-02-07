// Count the number of triplets whose sum is equal to the given value x.

#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 12;
    int totalTriplets = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totalTriplets++;
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }
    cout << "Total number of triplets = " << totalTriplets;
    return 0;
}