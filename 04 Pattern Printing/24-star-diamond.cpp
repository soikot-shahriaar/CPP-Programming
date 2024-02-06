/*
Enter the number of lines: 7
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of lines: ";
  cin >> n;

  int nst = 1;        // stars
  int nsp = n / 2;    // spaces
  int ml = n / 2 + 1; // middle line

  for (int i = 1; i <= n; i++)
  {
    // Printing spaces
    for (int j = 1; j <= nsp; j++)
      cout << "  ";

    // Printing stars
    for (int k = 1; k <= nst; k++)
      cout << "* ";

    // Updating stars and spaces for next line
    if (i < ml)
    {
      nsp--;
      nst += 2;
    }
    else
    {
      nsp++;
      nst -= 2;
    }

    cout << endl;
  }
  return 0;
}