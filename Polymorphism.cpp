#include <iostream>
#include <string>
using namespace std;

// this is called polymorphism 
// it is used for reusability


//base class
class Animal{
    public:
    void animalsound(){
        cout<< " the animal makes a sound \n ";

    }
};

//child class
class Pig:public Animal{
    public:
    void animalsound(){
        cout<<" the pig says : wee wee \n";
    }
};

//second child class
class Dog:public Animal{
    public:
    void animalsound(){
        cout<<" the dog says : bow bow\n";

    }
};

// main function 
int main(){
    Animal myanimal;
    Pig mypig;
    Dog mydog;

    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;

}