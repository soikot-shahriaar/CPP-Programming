// area of circle in a advanced way
// using library function

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;
    const float pi = 3.1416;

    cout << "Input Radius: ";
    cin >> radius;

    float result = pi * pow(radius, 2);
    cout << "Area of the Circle is: " << result;

    return 0;
}
