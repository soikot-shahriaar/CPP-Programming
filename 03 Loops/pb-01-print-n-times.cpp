// Print hello world ‘n’ times. Take ‘n’ as input from user

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of times to print: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cout << "Hello World" << endl;
    return 0;
}
