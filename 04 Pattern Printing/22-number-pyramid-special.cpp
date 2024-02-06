/*
Enter the number of lines: 6
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1
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
    // Printing spaces
    for (int q = 1; q <= nsp; q++)
      cout << "  ";
    nsp--;

    // Printing increasing sequence
    for (int j = 1; j <= i; j++)
      cout << j << " ";

    // Printing decreasing sequence
    int a = i - 1;
    for (int k = 1; k <= i - 1; k++)
    {
      cout << a << " ";
      a--;
    }
    cout << endl;
  }
  return 0;
}