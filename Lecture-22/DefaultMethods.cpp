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

    // Default Methods
    ///////////////// 1. DEFAULT CONSTRUCTOR //////////////////////
    Car()
    {
        // Constructor ka is to create object only
        // It does not have any return type
        cout << "Inside Deafult Constructor" << endl;
    }
    /////////////////// !DEFAULT CONSTRUCTOR //////////////////////



    ////////////////// 2. Parameterized Constructor///////////////
    Car(char *n, int p, int s, int m)
    {
        cout << "Inside Parameterized constructor1" << endl;
        strcpy(name, n);
        price = p;
        seats = s;
        model = m;
    }
    ////////////////// 2. !Parameterized Constructor///////////////



    ////////////////// 3. Parameterized Constructor///////////////
    Car(int p, char *n, int s, int m)
    {
        cout << "Inside Parameterized constructor2" << endl;
        strcpy(name, n);
        price = p;
        seats = s;
        model = m;
    }
    ////////////////// 3. !Parameterized Constructor///////////////



    ////////////////// 4. COPY CONSTRUCTOR ////////////////////////
    Car(Car &X){
        cout << "Inside Copy Constructor" << endl;
        strcpy(name, X.name);
        price = X.price;
        seats = X.seats;
        model = X.model;
    }
    ////////////////// 4. COPY CONSTRUCTOR ////////////////////////


    ///////////////// 5. Copy Assignment Operator ///////////////
    void operator = (Car X) {
        cout << "Inside Copy Assignment Operator";
        strcpy(name, X.name);
        price = X.price;
        model = X.model;
        seats = X.seats;
    }
    /////////////// 5. !Copy Assignment Operator ///////////////

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

    Car C("Bently", 10, 2, 2019);
    C.print();

    Car D(200, "Sumo", 4, 2005);
    D.print();

    // Car E = D;   // We can call the copy constructor in two ways.
    Car E(C);
    E.print();

    E = B;
    E.print();

    return 0;
}