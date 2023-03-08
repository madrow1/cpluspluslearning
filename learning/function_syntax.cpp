#include <iostream> 

// functions basically work the same as in python
int square(int x){
    x = x * x;
    return x;
}

int main(){
    int x; 
    std::cout << "Please enter a number to be squared: " << std::endl;
    std::cin >> x; 
    std::cout << "Your number squared is: " << square(x) << std::endl; 
}