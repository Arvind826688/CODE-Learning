// converting a string to lower case 
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char string[10];
    cout<< " Input the string to convert to lower case : "<<endl;
    cin.getline(string, 10);
    cout<< " Charater in lowercase : "<< strlwr(string);
    return 0;
    
}