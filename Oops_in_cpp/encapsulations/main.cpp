#include<iostream>
using namespace std;

class Employee{
    private:
    // Private Attribute
     int salary;

    public:
    // Setter
    void setSetter(int s){
        salary = s;
    };
    // Getter
    int getSalary(){
        return salary;
    };
};

int main(){
    Employee Harshiv;
    Harshiv.setSetter(67);
    cout<<"Salary is "<<Harshiv.getSalary();

    return 0;
}