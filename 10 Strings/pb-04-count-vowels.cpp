// Create a function to count the occurrence of vowels in a string

#include <iostream>
#include <string>
using namespace std;

int countVowels(string str)
{
    int count = 0;
    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main()
{
    string str = "i love my country bangladesh";
    cout << "Total vowels: " << countVowels(str) << endl;
    return 0;
}