/*
Enter number of Rows: 3
1
1 3
1 3 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // no of rows
        int a = 1;
        for (int j = 1; j <= i; j++) { // no of columns
            cout << a << " ";
            a = a + 2;
        }
        cout << endl;
    }
    return 0;
}