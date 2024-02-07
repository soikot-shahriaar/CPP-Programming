// Find the average of three numbers using function

#include <iostream>
using namespace std;

float avg(int x, int y, int z)
{
    float result;
    result = static_cast<float>(x + y + z) / 3;
    return result;
}

int main()
{
    int a, b, c;
    cout << "Enter the values of a, b, and c:" << endl;
    cin >> a >> b >> c;
    cout << "The value of average is " << avg(a, b, c) << endl;
    return 0;
}