#include <iostream>
#include <string>
using namespace std;
//base class (parent class)
class Vehicle{
    public:
    string brand = "ford";
    void honk(){
        cout<<"tuut, tuut \n";
    }
};

// derived class (child class)
class car:public Vehicle{
    public:
    string model = "mustang";
};

// derived form the derived (grandchild class)
class carparts:public car{
    public:
    string part = "Headlights";
};


//second child class(derived)
class bus:public Vehicle{
    public:
    void transport(){
        cout<<"public Transport\n";
    }
};


//derived class with multiple inheritance 
class Multiple:public car, public bus{

};
int main(){
    car yoyo;
    yoyo.honk();
    cout<<yoyo.model + "  " + yoyo.brand<<endl;

    carparts MultilevelInheritance;
    MultilevelInheritance.honk();
    cout<<MultilevelInheritance.model<<endl;
    cout<<MultilevelInheritance.part<<endl;


    Multiple venom;
    venom.transport();
    venom.car::honk();// removes ambiguity 
    cout<<venom.model<<endl;
    cout<<venom.bus::brand<<endl; // this removes ambiguity 
    



    return 0;
}