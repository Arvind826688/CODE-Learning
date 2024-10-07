#include <iostream>
using namespace std;

int main (){
    // Next there are differnt types of datatypes eg. boolean, char, int, float, double
    //boolean are of 1 byte having value 0 or 1 / true or false
    // char is also of 1 byte. In char we can store only one charater at a time ex. 't' , 'S' ...
    // int has size of 2 or 4 bytes depending upon your computer but assume it to be 4
    // float has size of 4 bytes . It store fractional number with 6 digit accuracy after decimal point
    // double is of 8 bytes. It store 15 decimal digits.

    int firstvariable;
    float secondVariable;
    double thirdVariable;
    char fourthVariable; // I made i mistake in making it a upper case letter that resulted in an error
    bool fifthVariable; // to use boolean we only say bool 

    //now 

    cout<< sizeof(int)<<endl;
    cout<<sizeof(firstvariable)<<endl;
    cout<< sizeof(secondVariable)<<endl;
    cout<< sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(thirdVariable)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(fourthVariable)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(fifthVariable)<<endl;

    // Basic garbage value 
    cout<< fifthVariable<<endl;
    cout<<fourthVariable<<endl;
    cout<<thirdVariable<<endl;
    cout<<secondVariable<<endl;
    cout<<firstvariable<<endl;
cout<< "random text "<<endl;
fifthVariable = 1;
cout<< fifthVariable<<endl;
    return 0;

}