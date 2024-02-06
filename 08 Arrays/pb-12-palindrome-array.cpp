// If an array contains n elements, then check if the given array is palindrome or not.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isPalindrome = true; // palindrome

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isPalindrome = false; // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "NOT a palindrome" << endl;

    return 0;
}