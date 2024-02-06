// Given an array containing elements from 1 to 100 expect one element in this range is missing. Find the missing element.

#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> arr)
{
    int n = arr.size() + 1;
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++)
        actualSum += arr[i];

    return expectedSum - actualSum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8};

    int missingElement = findElement(arr);

    cout << "The missing element is " << missingElement << endl;

    return 0;
}
