// Find the greatest of three numbers entered by the user.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
        cout << "Greatest number is " << num1;
    else if (num2 > num1 && num2 > num3)
        cout << "Greatest number is " << num2;
    else
        cout << "Greatest number is " << num3;
    return 0;
}
