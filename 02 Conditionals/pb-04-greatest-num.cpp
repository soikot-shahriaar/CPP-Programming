// Find the greatest of four numbers entered by the user.

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4;

    cout << "Enter Four Numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    float greatest = num1;

    if (num2 > greatest)
        greatest = num2;
    if (num3 > greatest)
        greatest = num3;
    if (num4 > greatest)
        greatest = num4;

    cout << "The Greatest Number is: " << fixed << greatest << endl;

    return 0;
}