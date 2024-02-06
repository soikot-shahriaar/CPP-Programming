/*
Enter number of Rows: 5
A
A B
A B C
A B C D
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
        for (int j = 1; j <= i; j++)
        {
            char x = a + 64; 
            cout << x << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
