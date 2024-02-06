/*
Enter number of Rows: 4
1
0 1
1 0 1
0 1 0 1
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
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0) // condition
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
