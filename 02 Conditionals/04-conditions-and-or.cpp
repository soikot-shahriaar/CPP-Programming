// Multiple Conditions using && and ||
// the greatest of three numbers using nested ifelse

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
            cout << num1 << " is greatest" << endl;
        else
            cout << num3 << " is greatest" << endl;
    }
    else
    {
        if (num2 > num3)
            cout << num2 << " is greatest" << endl;
        else
            cout << num3 << " is greatest" << endl;
    }
    return 0;
}
