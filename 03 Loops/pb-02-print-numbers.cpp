// Print natural numbers from 10 to 20 when the initial loop counter is 0.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 20; i++) {
        if (i >= 10)
            cout << i << " ";
    }
    return 0;
}