// while loop => checks the condition and then executes the code
// do-while loop => executes the code and then checks the condition, it executes at least one time

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 3);

    return 0;
}

/*
1
2
3
*/