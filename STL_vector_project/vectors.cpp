#include <iostream>
#include <vector>
#include <string>
#include "classes.h"

std::vector<int> primes;

int main()
{
    primes.push_back(1);
    primes.push_back(4);
    primes.push_back(7);
    primes.push_back(345);
    primes.push_back(4);

    std::cout << "The vector has: " << primes.size() << " elements " << std::endl;
    std::cout << primes[2] << std::endl;
    //vectors act like arrays in Python, in that data can be replaced by calling the array index and reassigning the value 
    primes[2] = 36;
    std::cout << primes[2] << std::endl;
    std::cout << std::endl; 
 
    std::vector<cow> cattle; 
    cattle.push_back(cow("cow", 12, pet));
    cattle.push_back(cow("cow", 1, hide));
    cattle.push_back(cow("cow", 3, dairy));
    cattle.push_back(cow("cow", 7, meat));

    std::cout << "The first cow is: " << cattle.begin()->get_name() << std::endl; 
    std::cout << "The second to last cow is: " << prev(cattle.end(),2)->get_name() << std::endl;
    std::cout << "The last cow is: " << (cattle.end()-1)->get_name() << std::endl; 

    return(0);
}