// Check whether a given number is prime or not using for loop.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int a = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (num == 1)
        cout << "1 is neither prime nor composite" << endl;
    else if (a == 0)
        cout << num << " is a Prime Number." << endl;
    else
        cout << "The given number is composite." << endl;
    return 0;
}
