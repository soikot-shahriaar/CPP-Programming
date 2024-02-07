/* A character array terminated by a '\0' (null character)
null character denotes string termination */

#include <iostream>
using namespace std;

void printString(const char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) // Important
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    // char firstName[] = {'S', 'o', 'i', 'k', 'o', 't','\0'};
    // char lastName[] = {'S', 'h', 'a', 'h', 'r', 'i', 'a', 'r','\0'};

    const char firstName[] = "Soikot";
    const char lastName[] = "Shahriar";

    printString(firstName);
    printString(lastName);
    return 0;
}