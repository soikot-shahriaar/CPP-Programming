#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name); // Safely inputs a multi-word string
    cout << "Entered name is " << name << endl;
    return 0;
}