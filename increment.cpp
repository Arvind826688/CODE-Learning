#include <iostream>
using namespace std;
int main (){
    int num1, num2;

    cout<< " Input number you want to perform operations on : "<<endl;
    cout<< " Enter first number : ";
    cin>> num1;
    cout<< " Enter second number : ";
    cin>> num2;
    int sum;
    int sum1;

    cout<<num1;
    sum = ++num1 ; // this is preincrement  which means sum is assigned the value num1 
    cout<< "\n number one : " <<num1<< "         sum : "<<sum;
    sum = num1++ ; // this is post increment which means that sum is assigned the value of num1 and then num1 is increased by one  . this means sum = num1 in this statement 
    cout<< "\n number one : "<<num1<<"            sum : "<<sum<<endl;
    
    cout<<num1;
    sum1 = num1--;// post decrement
    cout<< " \n number : " <<num1<<"             sum : "<<sum1;
    sum1 = --num1; // pre decrement 
    cout<< " \n number : "<<num1<< "                sum: "<<sum1<<endl;
    cout<< num2 << "\n now i decreaes the num2 with decrement : "<<sum1;
    
    return 0;
}