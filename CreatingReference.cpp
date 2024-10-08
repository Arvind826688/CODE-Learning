#include <iostream>
#include <string>
using namespace std;

int main() {

    string food = "Pizza";
    string &meal = food;

    cout<< food <<"\n";
    cout<< meal<<"\n";


    //here the & is the reference variable 
    // we can use any of the variables and both will output pizza
    // here we created a reference we  can also use it to get memory address 


    cout<< &food<<"\n";
    // the memory address is in hexadecimal form 

    //reference and pointers are very important concpets in the c++ they allow you to optimize programs to a great extent 

}