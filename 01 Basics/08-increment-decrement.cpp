#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    x++;
    cout << x << endl; // 6
    x--;
    cout << x << endl; // 5
    ++x;
    cout << x << endl; // 6
    --x;
    cout << x << endl; // 5

    return 0;
}