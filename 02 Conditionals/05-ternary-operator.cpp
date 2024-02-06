#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    age > 18 ? cout << "adult" << endl : cout << "not adult" << endl;

    int number = 9;
    int luckyNumber = 7;
    number == luckyNumber ? cout << "you are lucky" << endl : cout << "you are not lucky" << endl;

    return 0;
}
