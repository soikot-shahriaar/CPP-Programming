// Swap 2 numbers using pointers (call by reference)

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 3, y = 5;
    cout << "before swap: x = " << x << " & y = " << y << endl;
    swap(&x, &y);
    cout << "after swap: x = " << x << " & y = " << y << endl;
    return 0;
}