/*
Enter number of Rows: 5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
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
        for (int j = 1; j <= n; j++)
        {
            // cout << a << " ";
            // a++;
            char x = a + 64; // Convert integer to ASCII character
            cout << x << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}