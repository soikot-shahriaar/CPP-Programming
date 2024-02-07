#include <iostream>
using namespace std;

void preInPost(int n)
{
    if (n == 0)
        return;

    cout << "Pre " << n << endl;
    preInPost(n - 1);
    cout << "In " << n << endl;
    preInPost(n - 1);
    cout << "Post " << n << endl;
    return;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    preInPost(n);
    return 0;
}

/*
Enter Number: 2
Pre 2
Pre 1
In 1
Post 1
In 2
Pre 1
In 1
Post 1
Post 2
*/