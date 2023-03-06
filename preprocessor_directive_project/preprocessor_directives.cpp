// preprocessor 
#include <iostream> 
#include <string> 
#include <cstdint>

// directive, can be used to find and replace based on the name of the constant, now if the compiler finds CAPACITY it will be replaced with 5000 

#define CAPACITY 5000 
#define DEBUG

int main()
{
    int32_t large = CAPACITY;
    uint8_t small = 34;
#ifdef DEBUG 
    std::cout<<'[About to perform the addition]' << std::endl ;
#endif 
    large += small; 
    std::cout << "The large integer is " << large << std::endl; 
    return(0);
}