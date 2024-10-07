#include <iostream>
#include <string>
using namespace std;
// This is called short hand if else ( also called ternary operator ) 
// its syntax is 
// vairable = (condition) ? expression true : expression false;
int main (){
    int time = 15;
    string result = (time<18) ? "Good day " : "good evening ";
    cout<<result;

    return 0;
     
}