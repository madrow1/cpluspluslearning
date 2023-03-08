#include <iostream>

int a = 935;
bool flag = true;
char letter = 'a';

int main()
{
    if(a > 1000){
        std::cout << "A is greater that 1000" << std::endl;
    } else {
        std::cout << "A is less than 1000" << std::endl;
    }

    if(a % 2 == 0){
        std::cout << "A is an even number" << std::endl;
    } else { 
        std::cout << "A is an odd number" << std::endl;
    }
    if(letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' 
    && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U'){
        std::cout << "Letter is a constantant" << std::endl;
    } else {
        std::cout << "Letter is a vowel" << std::endl;
    }
    if(flag == false){
        std::cout << "Flag is false" << std::endl;
    } else {
        std::cout << "Flag is true" << std::endl;
    }

    return(0);
}