#include <iostream>
#include <string>
using namespace std;

int main() {

    // arrays can be of any type 
    /* 
    to declare an array 
    datatype arrayname[n] 
    where n is the no. of elements inside the array 
    string cars[4];
    string cars[4] = { "volvo", "bmw", "ford", "mazda"};
    int myNum[3] = { 10, 20 , 30};
    */

   string cars[4] = { " volvo " , " bmw ", " ford ", "mazda"};
   //cout<<cars[0]<<endl;
   //cout<<cars[3]<<endl;

   // in array 0 is the index of the first element , 1 is the index of the second element

   // we can also change its value 

   cars[1] = "Lamborghini " ;

   //cout<< cars[1]<<endl;


    // printing all elements of array via loops 

    for(int i=0; i<4; i++){
        cout<<cars[i]<<"\n";
    }

}