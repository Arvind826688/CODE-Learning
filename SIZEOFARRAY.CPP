#include <iostream>
#include <string>

using namespace std;

int main() {


int numbers[4] = { 1 , 2, 3, 3,};
cout<<"This is the size of array in bytes : " << sizeof(numbers)<<endl;;

// the result shows the size of array in bytes so it will always be n*4 ( no. of elements in the array multiplied by four)


int arrayone[5] = { 1, 23, 342, 43, 32};
int getArrayLength = sizeof(arrayone)/sizeof(int);
cout<<" this is the no. of elements in the array : "<<getArrayLength<<endl;


/* Looping through an array with size of */

for(int i=0; i<sizeof(arrayone)/sizeof(int); i++){
    cout<<arrayone[i]<<"\n";
}


/*Use "\n" when you just want to add a new line and performance is important.
Use std::endl when you need to flush the buffer explicitly (e.g., for debugging or interactive output).*/
return 0;
}
