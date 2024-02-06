// Given an array and a number 'x'. Find out 'x' lies in the array or not, if yes then print the index.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {12, 52, 13, 55, 51, 12, 17};
    int x = 55;
    int idx = -1;

    bool flag = false; // false means not present
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            flag = true; // true means present
            idx = i;
            break;
        }
    }
    
    if (flag == false)
        cout << x << " is not present in the array";
    else
        cout << x << " is present in the array and its index is " << idx;

    return 0;
}
