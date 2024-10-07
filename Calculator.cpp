#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout<< " Input number you want to perform operations on : "<<endl;
    cout<< " Enter first number : ";
    cin>> num1;
    cout<< " Enter second number : ";
    cin>> num2;
    int sum;
    int sum1;

    
    cout<< "sum of the number : " ;
    cout<< num1 + num2 <<endl;
    cout<< " difference of num1 and num2 : ";
    cout<< num1 - num2<<endl;
    cout<< " Multiplication of the numbers : " << num1*num2<<endl;
    cout<< " Modulus of the numbers : "<<num1%num2<<endl;
    cout<< " Division of the numbers num1 divided by num2 : "<<num1/num2<<endl;
return 0;

}