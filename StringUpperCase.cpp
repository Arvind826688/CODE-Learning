// converting the string to upper case without any functions 
#include <iostream>
#include <string.h>
using namespace std;
 void functionUpper(char s[]);
 int main(){
    char string[100];
    cout<< " Enter a string to convert it into upper case " <<endl;
    cin>> string;
    functionUpper(string); // calling functionUpper
    cout<<" Enterd string in upper case is : "<< string;
     return 0;
 }


 void functionUpper(char s[]){
    int c= 0;
    while(s[c] != '\0'){
        if(s[c] >= 'a' && s[c] <= 'z'){
            s[c] = s[c] -32;
        }
        c++;
    }
 }
