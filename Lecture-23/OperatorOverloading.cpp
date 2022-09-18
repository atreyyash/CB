#include <iostream>
#include <cstring>
using namespace std;

///////////////////////////// BLUEPRINT ///////////////////////////
class Car
{
private:
    int price;

public:
    // Data Members
    char *name;
    int model;
    int seats;
    static int cnt;
    const int tyres;

    // Default Methods
    ///////////////// 1. DEFAULT CONSTRUCTOR //////////////////////
    Car() : tyres(4)
    {
        // Constructor ka is to create object only
        // It does not have any return type
        cout << "Inside Deafult Constructor" << endl;
        name = NULL;
        cnt++;
    }
    /////////////////// !DEFAULT CONSTRUCTOR //////////////////////

    ////////////////// 2. Parameterized Constructor///////////////
    // Another way to initialize
    // Car(char *n, int p, int s, int m) : tyres(4)
    Car(char *n, int p, int s, int m) : tyres(4), model(m), price(p), seats(s)
    {
        cnt++;
        cout << "Inside Parameterized constructor1" << endl;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        // price = p;
        // seats = s;
        // model = m;
    }
    ////////////////// 2. !Parameterized Constructor///////////////

    ////////////////// 3. Parameterized Constructor///////////////
    // Car(int p, char *n, int s, int m)
    // {
    //     cout << "Inside Parameterized constructor2" << endl;
    //     name = new char[strlen(n) + 1];
    //     strcpy(name, n);
    //     price = p;
    //     seats = s;
    //     model = m;
    // }
    ////////////////// 3. !Parameterized Constructor///////////////

    ////////////////// 4. COPY CONSTRUCTOR ////////////////////////
    Car(Car &X) : tyres(4)
    {
        cnt++;
        cout << "Inside Copy Constructor" << endl;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        price = X.price;
        seats = X.seats;
        model = X.model;
    }
    ////////////////// 4. COPY CONSTRUCTOR ////////////////////////

    ///////////////// 5. Copy Assignment Operator ///////////////
    // void operator = (Car X) {
    //     cout << "Inside Copy Assignment Operator";
    //     strcpy(name, X.name);
    //     price = X.price;
    //     model = X.model;
    //     seats = X.seats;
    // }
    /////////////// 5. !Copy Assignment Operator ///////////////

    ////////////////// 6. DESTRUCTOR //////////////////////////

    // When main fuction is completed all the created will be destroyed and will destroyed by calling destructor

    // Tilde: ~
    ~Car()
    {
        cout << "Destroying: " << name << endl;
        cnt--;
    }
    ////////////////// 6. DESTRUCTOR //////////////////////////

    // Functions
    void print()
    {
        cout << "Name  : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Model : " << model << endl;
        cout << "Seats : " << seats << endl;
        cout << "Tyres : " << tyres << endl
             << endl;
    }

    // SetName
    void setName(char *n)
    {
        if (name != NULL)
        {
            delete[] name;
        }
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Setter
    void setPrice(int p)
    {
        if (p > 500 && p < 1000)
        {
            price = p;
        }
        else
        {
            price = 900;
        }
        // return price;
    }

    // Getter
    int getPrice()
    {
        return price;
    }

    /////////////////// Operator Overloading ///////////////////////
    void operator+=(Car X)
    {
        char *oldName = name;
        name = new char[strlen(oldName) + strlen(X.name) + 1];
        strcpy(name, oldName);
        strcat(name, X.name);
        price += X.price;
        model += X.model;
        seats += X.seats;
        delete[] oldName;
    }
    /////////////////// Operator Overloading ///////////////////////

    ///////////////////////////// !BLUEPRINT ///////////////////////////
};

// Static Variables :- These belongs to the class
// Non Static Variabe :- These belongs to the object and its unique to every object
// Way to initialize static vaiable
int Car::cnt = 0; // Scope Resolution Operator ( :: )

int main()
{
    Car A; // A is an object of class Car
    // A.name = "BMW";
    // strcpy(A.name, "BMW");
    A.setName("BMW");
    // A.price = 1000;
    A.setPrice(1000);
    cout << A.getPrice();
    A.seats = 4;
    A.model = 2018;

    Car B = A;

    A.print();
    B.print();

    Car C("AUDI", 100, 2, 2019);
    C.print();
    C += A;
    C.print();

    cout << "Count of Cars : " << Car::cnt << endl;

    return 0;
}