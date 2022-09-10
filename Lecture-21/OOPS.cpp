#include <iostream>
#include <cstring>
using namespace std;

///////////////////////////// BLUEPRINT ///////////////////////////
class Car
{
public:
    // Data Members
    char name[100];
    int model;
    int price;
    int seats;

    ///////////////// 1. DEFAULT CONSTRUCTOR //////////////////////
    Car()
    {
        // Constructor ka is to create object only
        // It does not have any return type
        cout << "Inside Deafult Constructor";
    }
    /////////////////// !DEFAULT CONSTRUCTOR //////////////////////

    // Functions
    void print()
    {
        cout << "Name  : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Model : " << model << endl;
        cout << "Seats : " << seats << endl
             << endl;
    }
};
///////////////////////////// !BLUEPRINT ///////////////////////////

int main()
{
    Car A; // A is an object of class Car
    // A.name = "BMW";
    strcpy(A.name, "BMW");
    A.price = 1000;
    A.seats = 4;
    A.model = 2018;

    Car B;
    strcpy(B.name, "Audi");
    B.price = 500;
    B.model = 2020;
    B.seats = 2;

    A.print();
    B.print();

    return 0;
}