#include <iostream>
#include <string>
using namespace std;

struct car{
    string brand;
    string model;
    int year;
};

int main(){
    car mycar1;
    mycar1.brand = "BMW";
    mycar1.model = "X5";
    mycar1.year = 1999;

    car mycar2;
    mycar2.brand = "Ford";
    mycar2.model = "Mustang";
    mycar2.year = 1969;

    cout<<"Car brand "<< mycar1.brand<<"  car model "<< mycar1.model<<"   car manufacturing year : "<< mycar1.year<<"\n";
    cout<< mycar2.brand<< mycar2.model<< mycar2.year<<"\n";

    return 0;
}