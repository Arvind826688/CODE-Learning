#include <iostream> 
using namespace std;

int additionFunction(int x, int y){
    return x+y;
}

double additionFunction(double x , double y){
    return x+y;
} // multiple functions can have the same name as long number of parameters or the type of parameter is different 
/* this is called function overloading 

It is better to overload a function rather than defining two functions that do the same thing*/
int main(){
    int num1 = additionFunction(7,3);
    double num2 = additionFunction(32.3, 543.34);

    cout<< " Int : "<< num1<< "\n";
    cout<< " double : "<< num2<< "\n";
    return 0;
}