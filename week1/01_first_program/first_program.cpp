#include <iostream>

// using directive
// using namespace std;

using std::cout;

int main() {
    // Print a welcome message 
    cout << "Hello COP3337!\n" << std::endl;

    // cout - console output
    // endl - new line
    // << stream insertion operator
    // :: scope resolution operator
    // std - standard namespace 

    std::cout << "5 / 2 is " << 5.0 / 2 << std::endl;


    return 0;
}