// Swap 2 numbers given by user

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;

    cout << "Before Swapping:\n a= " << a << ", b= " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping:\n a= " << a << ", b= " << b << endl;

    return 0;
}