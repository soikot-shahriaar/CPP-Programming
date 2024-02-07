// Given a point (x,y), write a program to find out if it lies on the x-axis or on the y-axis or at the origin (0,0).

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter two coordinates:" << endl;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "The point is at the origin." << endl;
    else if (x == 0)
        cout << "The point is on the x-axis." << endl;
    else if (y == 0)
        cout << "The point is on the y-axis." << endl;
    else
        cout << "The point is not on the x-axis or on the y-axis." << endl;
    return 0;
}