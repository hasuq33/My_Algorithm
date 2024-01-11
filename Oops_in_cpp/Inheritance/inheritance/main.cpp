#include<iostream>
using namespace std;

// Base Class
class Vehicle{
    public:
    string brand = "Ford";
    void honk(){
          cout << "Mama ni Ghadi aavi! \n" ;
    }
};

// This is my Derived Class
class car: public Vehicle{
    public:
     string model = "mustang";
};

int main(){
    car MyCar;
    MyCar.honk();
    cout<<MyCar.brand+" "+MyCar.model;
    return 0;
}