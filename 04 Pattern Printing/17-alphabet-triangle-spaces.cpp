/*
Enter number of Lines: 4
      A
    A B
  A B C
A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        int a = 1;
        for (int k = 1; k <= i; k++)
        {
            char x = 'A' + a - 1;
            cout << x << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}