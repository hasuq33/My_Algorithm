#include<string>
#include<iostream>
using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
};

int main(){
    MyClass myObj; //Create  an Object of MyClass
    
    // Access the attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Harshiv";

    cout << myObj.myNum <<"\n";
    cout<< myObj.myString<<endl;

    MyClass myObj1;
    myObj1.myNum = 23;
    myObj1.myString = "Foram";
    cout<<myObj1.myNum <<endl;
    cout<<myObj1.myString << endl;
}