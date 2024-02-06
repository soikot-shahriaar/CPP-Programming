// Take integer input and print the absolute value of that integer

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n;

    cout << n << endl;
    return 0;
}