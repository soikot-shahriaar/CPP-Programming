// Find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Input marks of three subjects:" << endl;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if (sum < 40 || a < 33 || b < 33 || c < 33)
        cout << "Failed" << endl;
    else
        cout << "Passed" << endl;
    return 0;
}