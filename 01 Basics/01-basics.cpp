// this is a comment
/* #include <iostream> --> is a header file library that lets us work with input and output objects, such as cout. Header files add functionality to C++ programs.
using namespace std --> means that we can use names for objects and variables from the standard library.*/

#include <iostream>
using namespace std;

int main()
{
    // cout --> is an object used together with the insertion operator (<<) to output/print text.
    cout << "Hello World!\n"; // every C++ statement ends with a semicolon ;
    cout << endl;             // this is also used for starting a new line
    cout << "I am Soikot Shahriar" << endl;

    cout << "3 + 6" << endl;
    cout << 3 + 6;

    return 0; // ends the main function.
}

// Omitting Namespace
// using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

// #include <iostream>
// int main(){
//     std::cout << "Hello World!";
//     return 0;
// }