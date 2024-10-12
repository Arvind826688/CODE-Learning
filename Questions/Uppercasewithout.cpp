// converting a string to upper case wihtout strlwr 
#include <iostream>
#include <string.h>
using namespace std;
void functionUpper(char s[]);
int main(){
    char string[100];
    cout<< " Enter the string to convert it into upper case " <<endl;
    functionUpper(string);
    cout<< "Enterd string in upper case is : "<<string;
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