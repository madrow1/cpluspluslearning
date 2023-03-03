#include <iostream> 

double avg_arrage[] = {34, 56, 23, 76, 42}; 

int main()
{
    float total = avg_arrage[0] + avg_arrage[1] + avg_arrage[2] + avg_arrage[3] + avg_arrage[4];
    std::cout << "The average is: " << total / 5 << std::endl; 
}