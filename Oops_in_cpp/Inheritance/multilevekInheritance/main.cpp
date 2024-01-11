#include<iostream>
using namespace std;

class MyClass{
    public:
     void myFunction(){
        cout<< "Some content in Parent class";
     }
};

// Derived Class
class MyChild: public MyClass{
    public:
    void myFunction(){
        cout<< "I love you Foram";
     }
};

// Derived Class(grandChild)
class MygrandChild: public MyChild{
};

int main(){
    MygrandChild Foram;
    Foram.myFunction();
}

