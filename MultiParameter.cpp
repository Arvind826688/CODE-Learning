#include <iostream>
#include <string>
using namespace std;


void StudentData(string fname, int age);
int main (){

    StudentData("Liam Scholar", 12);
    StudentData("Frodo Baggins", 15);
    return 0;
}

void StudentData(string fname, int age){
    cout<< "The name of the student is : "<<fname<<" and the age is : "<<age<<"\n";
}