#include <iostream>
#include <string>

enum cow_purpose {dairy,meat,hide,pet} ; 

struct cow{
    std::string name;
    int age; 
    unsigned char purpose; 
};

int main()
{
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "cow"; 
    my_cow.purpose = dairy; 
    std::cout << my_cow.name << " is a " << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << " She is " << my_cow.age << std::endl;
    return(0);
}