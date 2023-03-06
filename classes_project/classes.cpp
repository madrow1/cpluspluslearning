#include <iostream>
#include <string>
#include "classes.h"


int main()
{
    cow my_cow("Cow", 7, pet);
    std::cout << my_cow.get_name() << " is a type: " << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << " She is " << my_cow.get_age() << std::endl;
    return(0);
}