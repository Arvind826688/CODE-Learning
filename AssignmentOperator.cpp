#include <iostream>
using namespace std;

int main (){

    int num1, num2 , results;

    cout<< " Enter the two numbers : "<< endl;
    cin>> num1>> num2;
   // num1 = num2;
    //cout<< " Equality : "<< num1<<endl;
   // num1+=num2;
   // cout<< " addition and equality : "<<  num1<<endl;
   // num1-=num2;
   // cout<< " subtraction and equality : "<<num1<<endl;


   // num1 *= num2;
    //cout<< " Multiplication and equality : " <<num1<<endl;
   // num1/=num2;
   cout<< " Devision and equality : " << num1<<endl;

    num1 %=num2; // modulus assignment operator 
    cout<< " modulus and eqaulity : " <<num1<<endl;

    num1 &=num2;  // bitwise and operator
    cout<< " ampersent and equality : "<<num1<<endl;

    num1 |=num2; // bitwise or operator
    cout<< " i don't know this operator : " <<num1<<endl;

    num1 ^=num2; // bitwise xor operator 
    cout<<" power operator and equality : "<<num1<<endl;

    num1>>=num2;  // right assignment operator 
    cout<<" super increment or something we will see in results : "<<num1<<endl;

    num1<<=num2;  // left assignment operator 
    cout<< " super decrement or somehting else : "<<num1<<endl;

    return 0;
}