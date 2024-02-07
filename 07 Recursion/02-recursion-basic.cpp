// recursive function to print "Good Morning" n times

#include <iostream>
using namespace std;

void greeting(int n)
{
    if (n == 0)
        return;
    cout << "Good Morning" << endl;
    greeting(n - 1);
    return;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    greeting(n);
    return 0;
}