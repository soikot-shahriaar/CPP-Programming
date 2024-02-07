// Create a function to count the spaces ' ' in a string

#include <iostream>
#include <string>
using namespace std;

int countSpaces(string str)
{
    int count = 0;
    for (char ch : str)
    {
        if (ch == ' ')
            count++;
    }
    return count;
}

int main()
{
    string str = "i love my country bangladesh ";
    cout << "Total spaces: " << countSpaces(str) << endl;
    return 0;
}