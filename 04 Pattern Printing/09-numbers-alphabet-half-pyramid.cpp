/*
Enter number of Rows: 5
1
A B
1 2 3
A B C D
1 2 3 4 5
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
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            char x = a + 64; // Convert integer to ASCII character
            if (i % 2 == 0)
                cout << x << " ";
            else
                cout << j << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
