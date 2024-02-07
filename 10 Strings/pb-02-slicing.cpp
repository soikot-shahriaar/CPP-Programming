// Create a function named slice, which takes a string and returns a sliced string from index n to m

#include <iostream>
#include <string>
using namespace std;

void slice(const string &str, int n, int m)
{
    string newStr = str.substr(n, m - n + 1);
    cout << newStr << endl;
}

int main()
{
    string str = "Bangladesh";
    slice(str, 1, 6);
    return 0;
}