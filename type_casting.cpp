#include <iostream>
#include <cstdint> 

using namespace std; 

float flt = -7.44f; 
int32_t sgn ; 
uint32_t unsgn; 

int main()
{
    sgn = flt; 
    unsgn = sgn; 
    cout << flt << endl; 
    cout << sgn << endl; 
    cout << unsgn << endl; 

    return(0);
}