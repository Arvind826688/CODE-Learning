#include <iostream>
using namespace std;
int main (){
    // This is the the next video where we will learn how to use user input 
    int x, y;
    cout<< "Enter the value of x";
    cin>> x;
    cout<< "Enter the value of y : ";
    cin>> y;
    int sum;
    sum = x +y;
    cout << "This is the sum of both variables x and y : " <<sum<<endl;
    return 0;
}

// by default c++ gives a random value to any variable which we call as "garbage value "
// to avoid variables having garbage value we can assign value zero to them when we declare them
