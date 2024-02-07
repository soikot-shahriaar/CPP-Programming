// take 3 numbers input and tell if they can be the sides of a triangle

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three sides of a triangle:" << endl;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b)
        cout << "Yes! " << a << " " << b << " " << c << " can be the sides of a triangle." << endl;
    else
        cout << "Sorry! Not possible." << endl;
    return 0;
}