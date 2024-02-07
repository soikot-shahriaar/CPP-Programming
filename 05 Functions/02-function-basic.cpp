#include <iostream>
using namespace std;

void england()
{
    cout << "He is in England" << endl; // 6
    return;                             // 7
}
void australia()
{
    cout << "He is in Australia" << endl; // 4
    england();                            // 5
    return;                               // 8
}
void canada()
{
    cout << "He is in Canada" << endl; // 2
    australia();                       // 3
    return;                            // 9
}
int main()
{
    canada(); // 1
    return 0; // 10
}