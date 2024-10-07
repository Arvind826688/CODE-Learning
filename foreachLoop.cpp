#include <iostream>
using namespace std;

int main() {

    /* the foreach loop
    for ( type variableName : arrayname){
    code to be executed
    }
    */


   int myNumber[5] = { 1, 2, 3, 4, 5};
   for(int i: myNumber){
    cout<<i<<"\n";
   }
// this loop is exclusively for looping through the elements of an array added in c++ 11 (2011)
    return 0;
}