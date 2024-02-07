// Library Function => cout, cin
// User Defined Function => printHello(), calcSquare()

#include <iostream>
using namespace std;

// function declaration/prototype
void printHello();

int main()
{
    cout << "I'm Soikot Shahriar." << endl;
    printHello(); // function call
    return 0;
}

// function definition
void printHello()
{
    cout << "Hello World!" << endl;
    cout << "I'm From Bangladesh" << endl;
}