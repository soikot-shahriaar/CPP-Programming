#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 12)
    {
        cout << "child";
    }
    else if (age < 18)
    {
        cout << "teenager";
    }
    else
    {
        cout << "adult";
    }

    return 0;
}
