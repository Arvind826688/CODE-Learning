#include <iostream>
#include <string>
using namespace std;

void swapNums(int &x, int&y){
    int z = x;
    x=y;
    y=z;
}

int main(){
    int firstNum= 10;
    int secondNum = 342;
    cout<<"Before swap " <<firstNum<<"  "<< secondNum<<"\n";
    swapNums(firstNum, secondNum);
    cout<<" Affter swapping "<< firstNum<<"  "<< secondNum<<"\n";
    return 0;
}

/* Explanation 
In the declaration of the swapNums function we pass the parameter the value of 
whatever stored at the location of x and whatever stored at the location of y
then in the definition of the function we assign the value of x to a new variable z
now we replace the value of x to y (location of x has the value of y)
then we put the value of x inside the y (which we earlier gave to the z )
this way we swap the values of x and y with each other 
*/