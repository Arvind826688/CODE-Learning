#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char string[10];
    cout<< " Input a string to convert to upper case " << endl;
    cin.getline(string, 10);
    cout<< " character in upper case : "<< strupr(string);
    //strupr is use to convert lower case character to upper case 
    return 0;
    
}