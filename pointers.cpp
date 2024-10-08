#include <iostream>
#include <string>
using namespace std;

int main(){


    string food = "Pizza";
    string* ptr = &food;  // pointer is the variable with the name ptr, that stores the address of food . It is delcared by using *
    //cout<< food<<"\n";
    //cout<<&food<<"\n";
    //cout<< ptr<<"\n";
    /* string * ptr
    string *ptr
    string* ptr 
    these are all the same but last one is preferred */
    // get memory address and value 

    cout<< ptr << "\n"; // this is referencing 
    cout<< *ptr<< "\n"; // this is dereferencing : output the value of food with the pointer 

/*  asterisk 
when used in declaration (string* ptr) , it creates a pointer variable
when not used in declration it act as a dereference operator*/


cout<< food<<"\n";
cout<< &food<<"\n";
cout<< *ptr<<"\n";
*ptr = "Hamburger";
cout<<*ptr<<"\n";
cout<<food<<"\n";

}