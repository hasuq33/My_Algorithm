#include<iostream>
using namespace std;

class MyClass{
    public:
        void myMethod(){
            std::cout<<"myMethod method is calling!"<<std::endl;
        }
        void outsideMethod();
        int carSpeed(int maxSpeed);
};

// Let's Define Method outside the Class and also it should be the memeber of the inside class
void MyClass::outsideMethod(){
    cout<<"Outside Method is calling!"<<endl;
}

int MyClass::carSpeed(int maxSpeed){
    cout<<"Your Car's Speed is "<<maxSpeed<<endl;
}

int main(){
    MyClass myObj;
    myObj.outsideMethod();
    myObj.myMethod();
    myObj.carSpeed(200);
    return 0;
}