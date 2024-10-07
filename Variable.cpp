/* In this code we will see multiple variable
their declaration 
their use 
their size 
some operation on them also 

to declare a variable we use the below syntax
type variableName = value;  */
#include <iostream>
using namespace std;

int main (){
    int firstVariable = 5;
    double SecondVariable = 18.88888888888;
    float ThirdVariable = 213.321;
    char forthVariable = 'D';
    bool fifthVariable = true;

    //we can to something else also
    int a;
    a=5;
    cout<<a<<endl;

    // we can change values of these variables 
    firstVariable = 89;


    //we can also use const to declare unchange able variables 
    const int sixthVariable = 90;
    cout<<sixthVariable<<endl;
    //now we try to change it 
    // sixthVariable = 78;




    cout<<firstVariable<<endl;
    cout<<SecondVariable<<endl;
    cout<<ThirdVariable<<endl;
    cout<<forthVariable<<endl;
    cout<<fifthVariable<<endl;

    // some basic mathematical operations 
    cout<<firstVariable + SecondVariable <<endl; // in all of these lets see what c++ does cause we are adding two differnt type of variables 
    cout<<firstVariable - SecondVariable <<endl;
    cout<<firstVariable * SecondVariable <<endl;
    cout<<firstVariable / SecondVariable <<endl;
    cout<<firstVariable - SecondVariable <<endl; 
    return 0;
    // so what happend here is that the c++ compiler converted out int to the double and performed the operations 
    
}