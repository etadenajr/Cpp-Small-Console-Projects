//3rd console Project
//Title: Text Manipulation

//Header
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string text = "Welcome to C++";

    std::cout << "Text: " << text << std::endl;
    std::cout << "Length of text: " << text.length() << std::endl;

    std::cout << "Finding C in text: " << text.find('C') << std::endl;

    text[11] = 'c';
    std::cout << "Reassign C to c: " << text << std::endl;
}


//This Section can transform lowercase to uppercase
/**
auto upperCase(std::string text)
{
    std::transform(text.begin(), text.end(), text.begin(), [](unsigned c_str) { return toupper(c_str); });
    return text;
}

int main()
{
    std::string str;
    
    std::cout << "Enter a text: ";
    std::cin >> str;

    std::cout << "Text lowerCase: " << str << std::endl;
    std::cout << "Text upperCase: " << upperCase(str) << std::endl;
    std::cout << "Number of text: " << str.length() << std::endl;
}
*/
