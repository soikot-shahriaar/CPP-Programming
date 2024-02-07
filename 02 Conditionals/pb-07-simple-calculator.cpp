#include <iostream>
using namespace std;

int main()
{
    char operation;
    double first, second;
    cout << "Choose an Operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two Operands:" << endl;
    cin >> first >> second;

    switch (operation)
    {
    case '+':
        cout << first << " + " << second << " = " << (first + second);
        break;
    case '-':
        cout << first << " - " << second << " = " << (first - second);
        break;
    case '*':
        cout << first << " * " << second << " = " << (first * second);
        break;
    case '/':
        if (second != 0)
            cout << first << " / " << second << " = " << (first / second);
        else
            cout << "Error! Division by zero.";
        break;
    default:
        cout << "Error! Invalid Operator";
    }

    return 0;
}