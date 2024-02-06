// Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 1, 6, 2, 3};
    unordered_set<int> seen;

    for (int i = 0; i < 7; i++)
    {
        if (seen.find(arr[i]) == seen.end())
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {
            seen.insert(arr[i]);
        }
    }

    return 0;
}
