/*
Enter the number of lines: 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <iostream>
using namespace std;

int main()
{
  int n; // number of lines
  cout << "Enter the number of lines: ";
  cin >> n;

  int nst = 2 * n - 1; // number of stars
  int nsp = 0;         // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      cout << "  ";
    nst = nst - 2;

    for (int j = 1; j <= nst; j++)
      cout << "* ";
    nsp++;

    cout << endl;
  }
  return 0;
}
