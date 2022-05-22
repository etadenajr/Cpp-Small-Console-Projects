//4th console Project
//Title: Basic Calculator

#include <iostream>

int main()
{
    std::cout << "Basic Calculator" << std::endl;
    std::cout << "Note: Opration(+,-,*,/)" << std::endl << std::endl;

    double value1, value2, result;
    char operation; 

    //Value 1
    std::cout << "Enter Value 1: ";
    std::cin >> value1;
    //Operation
    std::cout << "Operation: ";
    std::cin >> operation;
    //Value
    std::cout << "Enter Value 2: ";
    std::cin >> value2;

    std::cout << std::endl;
    std::cout << "Calculation: " << value1 << operation << value2 << std::endl;

    if (operation == '+')
    {
        result = value1 + value2;
    } 
    else if (operation == '-')
    {
        result = value1 - value2;
    }
    else if (operation == '*')
    {
        result = value1 * value2;
    }
    else if (operation == '/')
    {
        result = value1 / value2;
    }
    else
    {
        std::cout << "You have invalid operation entered!!!" << std::endl;
    }
    std::cout << "Result: " << result << std::endl;
}
