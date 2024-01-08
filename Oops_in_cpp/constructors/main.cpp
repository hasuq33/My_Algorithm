// TO create a constructor use the name as the class, followed by parenthses()
#include<iostream>
using namespace std;

// class MyClass {
//     public:
//         MyClass(){
//             cout << "Hello World!";
//         }
// };

// int main(){
//     MyClass myObj;
//     return 0;
// }

class car {
    public : 
        string brand;
        string model;
        int year;

        car(string x,string y, int yrar);
};

car::car(string x , string y, int z){
    brand = x;
    model = y;
    year = z;
}

int main(){
    car myobj("BMW","x5",1999);
    car myObj2("Ford","Mustang",1969);

    // Print the values
    cout<< myobj.brand << " "<<myobj.model<<" "<<myobj.year<<endl;
    cout<<myObj2.brand<<" "<<myObj2.model<<" "<<myObj2.year<<endl;
}