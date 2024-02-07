#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num >= 0)
    {
        cout << "positive" << endl;
        if (num % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    else
    {
        cout << "negative";
    }

    return 0;
}