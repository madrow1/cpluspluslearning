#include <iostream>
#include <string>


int a, b = 5;

int main()
{
bool my_flag;
a = 7;
my_flag = false;
std::cout << "A is: " << a << std::endl;
std::cout << "B is: " << b << std::endl;
std::cout << "My_flag is : " << my_flag << std::endl;
my_flag = true;
std::cout << "My_flag is : " << my_flag << std::endl;
std::cout << "A + B = " << a + b << std::endl; 
std::cout << "B - A = " << b - a << std::endl; 
return(0);

}