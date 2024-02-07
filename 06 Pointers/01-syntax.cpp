// * -> value of address operator
// & -> address of operator

#include <iostream>
using namespace std;

int main()
{
    int age = 22;    // data is 22
    int *ptr = &age; // address of 22 is xyz
    int _age = *ptr; // data in xyz address is 22

    cout << _age << endl; // 22
    cout << endl;

    // printing address
    cout << &age << endl;                      // address of 22 is xyz
    cout << static_cast<void *>(&age) << endl; // address of 22 is xyz
    cout << ptr << endl;                       // address of 22 is xyz
    cout << static_cast<void *>(&ptr) << endl; // address of xyz is pqr
    cout << endl;

    // printing data
    cout << age << endl;     // data is 22
    cout << *ptr << endl;    // data in xyz address is 22
    cout << *(&age) << endl; // data in xyz address is 22

    return 0;
}