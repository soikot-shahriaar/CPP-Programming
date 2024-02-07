// Write a program to find a duplicate element from a given array of integers.

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 4, 5, 6, 7};
    unordered_set<int> seen;

    for (int i = 0; i < 7; i++)
    {
        if (seen.find(arr[i]) != seen.end())
        {
            cout << arr[i] << " is the duplicate element" << endl;
            break;
        }
        else
        {
            seen.insert(arr[i]);
        }
    }

    return 0;
}