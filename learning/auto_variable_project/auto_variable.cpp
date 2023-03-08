#include <iostream>
#include <string>

auto a = 1;
auto b = 1234523;
auto c = 34.1f;
auto d = 234.23;
auto e = true; 
auto f = 'd';


int main()
{
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;

    return(0);
}