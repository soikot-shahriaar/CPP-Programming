// Tower of Hanoi
// Object of the game is to move all the disks over to last tower (tower C). But you cannot place a larger disk onto a smaller disk.
// Calculate how many minimum moves are needed.

#include <iostream>
using namespace std;

void towerHanoi(int n, char source, char helper, char destination)
{
    if (n == 0)
        return;

    towerHanoi(n - 1, source, destination, helper);
    cout << source << " -> " << destination << endl;
    towerHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerHanoi(n, 'A', 'B', 'C');
    return 0;
}