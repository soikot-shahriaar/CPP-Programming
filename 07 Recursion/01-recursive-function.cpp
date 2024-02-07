// when a function call itself, its called recursive function

// printing "Soikot Shahriar" 3 times using recursion

#include <iostream>
using namespace std;

// recursive function
void printName(int count)
{
    if (count == 0)
        return;

    cout << "Soikot Shahriar" << endl;
    printName(count - 1);
}

int main()
{
    int n = 3;
    printName(n);

    return 0;
}