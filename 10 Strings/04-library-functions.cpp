#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";

    // Length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Substring from position 7 to 5 characters long
    string substr = str.substr(7, 5);
    cout << "Substring: " << substr << endl;

    // Find the position of a substring
    size_t pos = str.find("World");
    if (pos != string::npos)
        cout << "Found at position: " << pos << endl;
    else
        cout << "Substring not found." << endl;

    // Replace "World" with "C++"
    str.replace(pos, 5, "C++");
    cout << "After replacement: " << str << endl;

    // Append another string
    str.append(" How are you?");
    cout << "After appending: " << str << endl;

    // Insert a substring at position 7
    str.insert(7, " dear");
    cout << "After insertion: " << str << endl;

    return 0;
}