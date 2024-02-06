// Print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6 . . upto n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            sum = sum + i;
        else
            sum = sum - i;
    }
    cout << "Sum is " << sum;
    return 0;
}
