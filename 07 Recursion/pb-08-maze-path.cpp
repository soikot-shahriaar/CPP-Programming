// Write a recursive program to count the ways to travel from the start to the end of a maze path.
// The moves should only be on the down or right side and only one step at a time.

#include <iostream>
using namespace std;

int mazePath(int r, int c)
{
    int rightWays = 0;
    int downWays = 0;

    if (r == 1 && c == 1)
        return 1;
    if (r == 1) // can't go down
        return rightWays += mazePath(r, c - 1);
    if (c == 1) // can't go right
        return downWays += mazePath(r - 1, c);
    if (r > 1 && c > 1)
    {
        rightWays += mazePath(r, c - 1);
        downWays += mazePath(r - 1, c);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int NoOfWays = mazePath(r, c);
    cout << "Number of ways: " << NoOfWays << endl;

    return 0;
}