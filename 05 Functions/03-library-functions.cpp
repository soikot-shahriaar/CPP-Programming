#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 27;
    int y = 3;
    int z = 3.78;

    cout << sqrt(x) << endl; // Square root
    cout << cbrt(x) << endl; // Cubic root

    cout << pow(x, y) << endl; // x raised to the power y.

    cout << ceil(z) << endl;  // Smallest integer greater than or equal to x.
    cout << floor(z) << endl; // Largest integer less than or equal to x.
    cout << round(z) << endl; // Value of x rounded to the nearest integer.

    cout << min(x, y) << endl; // Minimum of x and y.
    cout << max(x, y) << endl; // Maximum of x and y.

    return 0;
}