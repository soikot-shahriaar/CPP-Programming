// Find a salted from of a password entered by user if the salt is "123" & added at the end.

#include <iostream>
#include <string>
using namespace std;

void salting(string password)
{
    string salt = "123";
    string newPass = password + salt;
    cout << "Password after salting: " << newPass << endl;
}

int main()
{
    string password;
    cout << "Enter password: ";
    cin >> password;
    salting(password);
    return 0;
}