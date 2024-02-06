// Given an array of marks of 10 students, if the mark of any student is less than 40 print its roll number as failed students. [roll number here refers to the index of the array]

#include <iostream>
using namespace std;

int main()
{
    int marks[10] = {45, 36, 90, 56, 35, 67, 65, 78, 56, 12};
    cout << "Failed students roll numbers are:" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 40)
            cout << i << "\t";
    }
    return 0;
}