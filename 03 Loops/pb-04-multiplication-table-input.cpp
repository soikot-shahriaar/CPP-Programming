// Print the multiplication table of a number x that inputs by user and y number of times.

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the multiplication number:" << endl;
    cin >> x;
    cout << "Enter the multiplication times:" << endl;
    cin >> y;

    for (int i = 1; i <= y; i++)
        cout << x << " X " << i << " = " << i * x << endl;

    return 0;
}
