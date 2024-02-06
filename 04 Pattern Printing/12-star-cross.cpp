/*
Enter number of Rows: 5
*       *
  *   *
    *
  *   *
*       *
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
    for (int j = 1; j <= n; j++)
    {
      if (i == j || i + j == n + 1) // condition
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
  return 0;
}
