/*
Enter number of Rows: 3
1 2 3
1 2
1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j + 2 << " ";
        }
        cout << endl;
    }
    return 0;
}