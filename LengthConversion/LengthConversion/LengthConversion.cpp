//2nd console Project
//Title: Length Conversion

//Header file
#include <iostream>

//Constant values
const int FEET_CONV = 3.28; // 1 meter = 3.28 ft
const int INCHE_CONV = 12; // 1 ft = 12 inches
const int CM_CONV = 100; // 1 meter = 100 cm
const int MM_CONV = 1000; // 1 meter = 1000 mm
const int YARD_CONV = 3; // 1 yard = 3 ft
const int FATHOM_CONV = 6; // 1 fathom = 6 ft

int main()
{
    int value;

    std::cout << "Length Conversion";
    std::cout << "Note: Input value must be in meter" << std::endl;
    std::cout << "Enter a value: ";
    std::cin >> value;
    std::cout << std::endl;

    //converted to feet
    int feet = value * FEET_CONV;
    std::cout << "Value in feet: " << feet << " ft." << std::endl;

    //converter to inches
    int inches = feet * INCHE_CONV;
    std::cout << "Value in inches: " << inches << " in." << std::endl;

    //converter to centimeter
    int c_meter = value * CM_CONV;
    std::cout << "Value in centimeter: " << c_meter << " cm." << std::endl;

    //converter to millimeter
    int m_meter = value * MM_CONV;
    std::cout << "Value in millimeter: " << m_meter << " mm." << std::endl;

    //converter to yard
    int yard = feet / YARD_CONV;
    std::cout << "Value in yard: " << yard << " yd." << std::endl;

    //converter to fathom
    int fathom = feet / FATHOM_CONV;
    std::cout << "Value in fathom: " << fathom << " fathom" << std::endl;
}
