#include <iostream>

float op1, op2, result;
char operation; 

int main()
{
    std::cout << "Please enter the first operand: " << std::endl; ;
    std::cin >> op1;
    std::cout << "Please enter the second operand: " << std::endl; ;
    std::cin >> op2;
    std::cout << "Please enter the operator (+ - / *): " << std::endl; ;
    std::cin >> operation; 

    switch(operation){
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    case '/':
        result = op1 / op2;
        break;
    case '*':
        result = op1 * op2;
        break;
    }

    std::cout << "The result is: " << result << std::endl;

    return(0);
}