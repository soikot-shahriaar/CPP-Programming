#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Day Number (1-7): ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "This is Saturday" << endl;
        break;
    case 2:
        cout << "This is Sunday" << endl;
        break;
    case 3:
        cout << "This is Monday" << endl;
        break;
    case 4:
        cout << "This is Tuesday" << endl;
        break;
    case 5:
        cout << "This is Wednesday" << endl;
        break;
    case 6:
        cout << "This is Thursday" << endl;
        break;
    case 7:
        cout << "This is Friday" << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}
