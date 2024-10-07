#include <iostream>
using namespace std;

int main (){

    int num1, num2 ;
    cin>>num1 >> num2;

    cout<< (num1<5&&num2<8)<<endl; // logical and operator 
    cout<<(num1<8||num2<5)<<endl; // logical or operator
    cout<< (!(num1<5&&num2<8))<<endl; // logical not operator

    return 0;
}