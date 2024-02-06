// Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
// Roll    Marks
// 101      84
// 102      82
// 103      81
// 104      89

#include <iostream>
using namespace std;

int main()
{
    int stored[4][2] = {{101, 84}, {102, 82}, {103, 81}, {104, 89}};

    cout << "Roll No and Marks of Students:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << stored[i][j] << "\t";
            
        cout << endl;
    }
    return 0;
}
