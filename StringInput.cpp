#include <iostream>
#include <string>
using namespace std;

int main(){

    // a string variable contains a collection of characters surrounded by double quotes 

   // string greeting = "Hello";

    string firstName = "Frodo";
    string lastName = "Baggins" ;
    string fullName = firstName + " " + lastName; // this process is called string concatenation (adding of strings )

    cout << fullName<<endl;

    /*string firstName = "Frodo";
    string lastName = "Baggins";
    string fullName = firstName.append(lastName); // append changes the value of firstName also 
    cout<<fullName<<endl;*/
    

    // a string in c++ is a object , which contain functions that can perform certain operations on strings .
    // numbers are added and string are concatenated.


    // Length of the string
    cout<< firstName<<endl;
    cout<< "The length of the string firstName is : " << firstName.length()<<endl;
    // other way to get the size of the string is

    cout<< firstName.size()<<endl;


    //accessing the particular element at some index in a string ( in programming indexing starts from 0 )

    cout<<"Element at the index 0 / first element of the string : "<< fullName[0]<<endl; // elemet at the position 1
    cout << " elemte at the index 10 : " << fullName[10]<<endl; // element at the position no. 11

    // we can also change string elements this way 
    cout<<"String before the change : "<< fullName<<endl;
    fullName[1] = 'q';
    cout<<"String after the change : "<<fullName<<endl;

    

    return 0;
}