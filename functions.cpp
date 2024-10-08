#include <iostream>
#include <string>
using namespace std;

void myFunction() { // this is declaration of the function

    cout<<" I just got executed  \n";// this is the definition of the function

}

void FullName(string fName = "Frodo Baggins"){// in this function we added a parameter , you can add any number of parameters in the function. The name frodo baggins in the definition is the default parameter value .

    cout<< fName<<" \n dayumm\n";

}

int main(){

    myFunction();
    myFunction();
    myFunction();
    myFunction();


    // user defined functions need to be above the main function 
    // cause they are needed inside the main function 
    // if they are declared later then program will give error

    //declration must be above but you can put the defintion below the main function
    FullName("Venom");
    FullName();

}