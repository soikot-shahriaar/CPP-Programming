#include <iostream>
using namespace std;

int main()
{
    int myNum = 6;                // Integer (whole number)
    float myFloatNum = 5.99;      // Floating point number
    double myDoubleNum = 9.99;    // Floating point number
    char myLetter = 'S';          // Character
    bool myBoolean = true;        // Boolean
    string myText = "Bangladesh"; // String

    // float vs. double
    // The precision of float is only six or seven decimal digits.
    // double variables have a precision of about 15 digits.

    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    // A boolean data type can only take the values true or false.
    // When the value is returned, true = 1 and false = 0.

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; // Outputs 1 (true)
    cout << isFishTasty << endl; // Outputs 0 (false)

    // The string type is used to store a sequence of characters (text).
    string greeting = "Hello";
    cout << greeting;
    return 0;
}