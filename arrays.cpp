#include <iostream>

#define AGE_LENGTH 4 

int age[AGE_LENGTH];
float temperatures[] = {31.5, 32.7, 38.9}; // implicit conversion 

int main()
{
    age[0] = 25;
    age[1] = 35;
    age[2] = 32;
    age[3] = 14;
    std::cout << age[0] << std::endl; 
    std::cout << age[1] << std::endl; 
    std::cout << age[2] << std::endl; 
    std::cout << age[3] << std::endl; 

    std::cout << temperatures[0] << std::endl; 
    std::cout << temperatures[1] << std::endl; 
    std::cout << temperatures[2] << std::endl; 

    return(0);
}