/*
Enter the number of lines: 4
      *
    * * *
  * * * * *
* * * * * * *
 */

#include <iostream>
using namespace std;

int main()
{
  int n; // number of lines
  cout << "Enter the number of lines: ";
  cin >> n;

  int nst = 1;     // number of stars
  int nsp = n - 1; // number of spaces

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= nsp; k++)
      cout << "  ";
    nsp = nsp - 1;

    for (int j = 1; j <= nst; j++)
      cout << "* ";
    nst = nst + 2; // stars increasing by 2

    cout << endl;
  }
  return 0;
}