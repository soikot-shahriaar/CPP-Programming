// Check if a given character is present in a string or not

#include <iostream>
#include <string>
using namespace std;

void checkChar(string str, char ch)
{
    bool present = false;
    for (char c : str)
    {
        if (c == ch)
        {
            present = true;
            break;
        }
    }
    if (present)
        cout << "Character is present" << endl;
    else
        cout << "Character is NOT present" << endl;
}

int main()
{
    checkChar("I Love Bangladesh", 'A');
    return 0;
}