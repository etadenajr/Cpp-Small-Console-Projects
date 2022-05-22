//8th console Project
//Title: Basic SmartPhone Catalog Extended

//Header
#include <iostream>
#include "BasicSmartphoneCatalogExtended.h"

//Object template and Constructor for Smartphone Catalog
class smartPhoneCatExtended {

//Isolating the brandRating using private
//To void direct change of the brandRating
private:
    std::string brandRating;

//It public can be change directly
public:
    std::string brandName;
    std::string brandModel;
    std::string brandOS;
    int price = 0;

    //Default Constructor
    smartPhoneCatExtended(){}
    //Object Constuctor
    smartPhoneCatExtended(std::string _brandName, std::string _brandModel, std::string _brandOS, int _price, std::string _brandRating)
    {
        brandName = _brandName;
        brandModel = _brandModel;
        brandOS = _brandOS;
        price = _price;
        setbrandRating(_brandRating);
    }

    //Setter for brandRating
    //Setting a limatation for the brandRating
    void setbrandRating(std::string _brandRating) {
        if (_brandRating == "1" || _brandRating == "2" || _brandRating == "3" || _brandRating == "4" || _brandRating == "5")
        {
            brandRating = _brandRating + " stars";
        }
        else
        {
            brandRating = "NR";
        }
    }

    //Getter for brandRating
    //Getting the value of brandRating
    std::string getbrandRating() {
        return brandRating;
    }

};


//Inheritance
class laptopCat : public smartPhoneCatExtended {
public:
    std::string brandName;
    std::string brandModel;
    std::string brandOS;
    int price = 0;

    //Default Constructor
    laptopCat(){}
    //Object Constuctor
    laptopCat(std::string _brandName, std::string _brandModel, std::string _brandOS, int _price)
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
    smartPhoneCatExtended phone1("Vivo", "Y5", "Android", 10000, "4");
    smartPhoneCatExtended phone2("Oppo", "F10", "Android", 15000, "3");
    smartPhoneCatExtended phone3("Nokia", "N10", "Android", 9000, "3");
    smartPhoneCatExtended phone4("iPhone", "11", "iOS", 40000, "4");
    smartPhoneCatExtended phone5("iPhone", "20", "iOS", 100000, "5");

    //Object Instance for laptopCat Class
    laptopCat laptop1("Acer", "GameN2", "Windows-11", 100000);
    laptopCat laptop2("MSI", "SkyWalker", "Ubuntu", 150000);
    laptopCat laptop3("MAC", "Rizer", "AppleOS", 170000);

    //Printing Each Objects
    std::cout << "***** Brand Name  : " << phone1.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone1.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone1.brandOS << std::endl;
    std::cout << "***** Price       : " << phone1.price << std::endl;
    std::cout << "***** Rating      : " << phone1.getbrandRating() << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone2.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone2.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone2.brandOS << std::endl;
    std::cout << "***** Price       : " << phone2.price << std::endl;
    std::cout << "***** Rating      : " << phone2.getbrandRating() << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone3.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone3.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone3.brandOS << std::endl;
    std::cout << "***** Price       : " << phone3.price << std::endl;
    std::cout << "***** Rating      : " << phone3.getbrandRating() << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone4.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone4.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone4.brandOS << std::endl;
    std::cout << "***** Price       : " << phone4.price << std::endl;
    std::cout << "***** Rating      : " << phone4.getbrandRating() << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << phone5.brandName << std::endl;
    std::cout << "***** Brand Model : " << phone5.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << phone5.brandOS << std::endl;
    std::cout << "***** Price       : " << phone5.price << std::endl;
    std::cout << "***** Rating      : " << phone5.getbrandRating() << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << laptop1.brandName << std::endl;
    std::cout << "***** Brand Model : " << laptop1.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << laptop1.brandOS << std::endl;
    std::cout << "***** Price       : " << laptop1.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << laptop2.brandName << std::endl;
    std::cout << "***** Brand Model : " << laptop2.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << laptop2.brandOS << std::endl;
    std::cout << "***** Price       : " << laptop2.price << std::endl << std::endl;

    std::cout << "***** Brand Name  : " << laptop3.brandName << std::endl;
    std::cout << "***** Brand Model : " << laptop3.brandModel << std::endl;
    std::cout << "***** Brand OS    : " << laptop3.brandOS << std::endl;
    std::cout << "***** Price       : " << laptop3.price << std::endl << std::endl;

}

