// Find the second largest of all the elements in the array.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {33, -12, 45, -122, 98, 98};
    int max = INT_MIN;
    int sec_max = INT_MIN;

    for (int i = 0; i < 6; i++) // max
    {
        if (max < arr[i])
            max = arr[i];
    }

    for (int i = 0; i < 6; i++) // second max
    {
        if (sec_max < arr[i] && arr[i] != max)
            sec_max = arr[i];
    }

    cout << "Largest Value is " << max << endl;
    cout << "Second Largest Value is " << sec_max << endl;
    return 0;
}
