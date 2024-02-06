#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {111, 222, 333, 444, 555};
    arr[1] = 999; // {111, 999, 333, 444, 555};
    arr[4] = 777; //{111, 222, 333, 444, 777};
    cout << arr[1] << endl;
    // cout << arr[10] << endl;
    // cout << arr[-1] << endl;

    float a[3] = {2.11, 6.111, 21.13};
    cout << a[1] << endl;

    char ar[5] = {'S', 'K', 'T', 'S', 'H'};
    cout << ar[3] << endl;

    return 0;
}