// // recursive function to print n to 1 (decreasing)

#include <iostream>
using namespace std;
void decreasing(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    decreasing(n - 1); // Recursive call

    return;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    decreasing(n);
    return 0;
}