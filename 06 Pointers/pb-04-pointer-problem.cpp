// Write a program using a function that calculates the sum and average of two numbers.
// Use pointers and print the values of sum and average in main().

#include <iostream>
using namespace std;

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = static_cast<float>(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    cout << "The value of sum is " << sum << endl;
    cout << "The value of sum is " << avg << endl;
    return 0;
}