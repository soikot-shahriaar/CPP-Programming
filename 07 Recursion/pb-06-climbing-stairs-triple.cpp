// Write a recursive function to find number of ways to reach the nth stair (single step, double step and triple step)

#include <iostream>
using namespace std;

int stairWays(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return stairWays(n - 1) + stairWays(n - 2) + stairWays(n - 3);
}

int main()
{
    int n;
    cout << "Enter nth stair: ";
    cin >> n;

    cout << "The number of ways to reach " << n << "th stair is " << stairWays(n);

    return 0;
}