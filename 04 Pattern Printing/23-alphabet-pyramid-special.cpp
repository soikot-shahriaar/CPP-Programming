/*
Enter the number of lines: 5
        A
      A B A
    A B C A B
  A B C D A B C
A B C D E A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    int nsp = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int q = 1; q <= nsp; q++)
            cout << "  ";
        nsp--;

        for (int j = 1; j <= i; j++)
        {
            char ch = j + 64;
            cout << ch << " ";
        }

        int a = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
            char x = k + 64;
            cout << x << " ";
            a--;
        }
        cout << endl;
    }
    return 0;
}