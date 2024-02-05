#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    // assigning the same value to multiple variables in one line:
    int a, b, c;
    a = b = c = 3;
    cout << a + b + c << endl;

    int myAge = 22;
    cout << "I am " << myAge << " years old." << endl;

    // We can use ASCII values to display certain characters:
    char m = 65, n = 66, o = 67;
    cout << m << endl;
    cout << n << endl;
    cout << o << endl;

    return 0;
}