// Display this Arithmetic Progression 4,7,10,13,16.. upto n terms.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms of Arithmetic Progression: ";
    cin >> n;

    int ap = 4;
    for (int i = 1; i <= n; i++) {
        cout << ap  << " ";
        ap = ap + 3;
    }
    return 0;
}