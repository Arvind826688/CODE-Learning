#include <iostream>
using namespace std;


int main(){

    int num1, num2, results;

    cout<< " Enter the numbers : "<<endl;
    cin >> num1>>num2;
    results = num1 +num2;
    cout<< " The outpuut of sum is : "<< results<<endl;

    results = num1 - num2 ;
    cout<< " The output of subtractions is : "<< results<<endl;

    results = num1*num2;
    cout<< " The output of multiplication is : "<<results<<endl;

    results = num1/num2;
    cout<< " the output of division is : "<< results<<endl;

    results = num1%num2;
    cout<< " The output of modulus is : "<<results <<endl;


    cout<< "The value of results is before the increment operator : "<<results<<endl;
    results = ++results;
    cout<<" The value of results after increment operator : " <<results<<endl;

    cout<< " The value of results before decrement operator : " <<results <<endl;
    results = --results;
    cout<< " The value of results after decrement operator : "<<results <<endl;

    return 0;





}