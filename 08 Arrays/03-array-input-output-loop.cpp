#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter the marks for student " << i << ": ";
        cin >> marks[i];
    }
    for (int i = 1; i <= 3; i++)
    {
        cout << "marks of student " << i << " is " << marks[i] << endl;
    }
    return 0;
}