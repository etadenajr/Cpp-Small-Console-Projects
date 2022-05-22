//7th console Project
//Title: Basic SmartPhone Catalog

//Header
#include <iostream>

//Object template and Constructor for Smartphone Catalog
class smartPhoneCat {
    public:
        std::string brandName;
        std::string brandModel;
        std::string brandOS;
        int price;

        //Object Constuctor
        smartPhoneCat(std::string _brandName, std::string _brandModel, std::string _brandOS, int _price)
        {
            brandName = _brandName;
            brandModel = _brandModel;
            brandOS = _brandOS;
            price = _price;
        }

};

int main()
{
    std::cout << "*****  Basic Smartphone Catalog " << std::endl << std::endl;

    //Object Instance
    smartPhoneCat phone1("Vivo", "Y5", "Android", 10000);
    smartPhoneCat phone2("Oppo", "F10", "Android", 15000);
    smartPhoneCat phone3("Nokia", "N10", "Android", 9000);
    smartPhoneCat phone4("iPhone", "11", "iOS", 40000);
    smartPhoneCat phone5("iPhone", "20", "iOS", 100000);
    
    //Printing Each Objects
    std::cout << "***** Brand Name  : " << phone1.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone1.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone1.brandOS << std::endl;
    std::cout << "***** Price       : " << phone1.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone2.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone2.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone2.brandOS << std::endl;
    std::cout << "***** Price       : " << phone2.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone3.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone3.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone3.brandOS << std::endl;
    std::cout << "***** Price       : " << phone3.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone4.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone4.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone4.brandOS << std::endl;
    std::cout << "***** Price       : " << phone4.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone5.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone5.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone5.brandOS << std::endl;
    std::cout << "***** Price       : " << phone5.price << std::endl << std::endl;


}

