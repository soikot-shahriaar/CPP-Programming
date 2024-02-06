// Syntax of 3 Loops

#include <iostream>
using namespace std;

int main()
{
    // for loop
    for (int i = 1; i <= 3; i++)
    {
        cout << i << " hello world" << endl;
    }

    cout << endl;

    // while loop
    int j = 1;
    while (j <= 3)
    {
        cout << j << " hi shahriar" << endl;
        j++;
    }

    cout << endl;

    // do while loop
    j = 1;
    do
    {
        cout << j << " hello bangladesh" << endl;
        j++;
    } while (j <= 3);
    
    return 0;
}


/*
1 hello world
2 hello world
3 hello world

1 hi shahriar
2 hi shahriar
3 hi shahriar

1 hello bangladesh
2 hello bangladesh
3 hello bangladesh
*/