// break statement completely exits the loop
// continue statement skips the particular iteration of the loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            cout << endl;
            continue;
        }
        cout << i << endl;
    }
    return 0;
}

/*
1
2

4
5
*/