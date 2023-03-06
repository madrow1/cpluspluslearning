// Basic library containing C++ functions 
#include <iostream>
#include <string>
// Sets namespace as default, meaning specifications like "std" can be skipped, not advisable in more complex code
using namespace std;

// Main function, is called as an int because it must return an integer value indicating success of execution
int main()
{
    string str;
    std::cout << "Please enter your name: " ;
    std::cin >> str;
    std::cout << "Hello, " + str;

    return 0;
}