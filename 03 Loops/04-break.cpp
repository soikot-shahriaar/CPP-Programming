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
            break;
        }
        cout << i << endl;
    }
    cout << "End of Program";
    return 0;
}

/*
1
2
End of Program
*/