/*
Enter the number of lines: 5
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
*/

#include <iostream>
using namespace std;

int main()
{
  int n; // number of lines
  cout << "Enter the number of lines: ";
  cin >> n;

  int nst = 1;     // number of alphabets
  int nsp = n - 1; // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      cout << "  ";
    nsp = nsp - 1;

    int a = 1;
    for (int j = 1; j <= nst; j++)
    {
      char x = a + 64;
      cout << x << " ";
      a++;
    }
    nst = nst + 2;

    cout << endl;
  }
  return 0;
}