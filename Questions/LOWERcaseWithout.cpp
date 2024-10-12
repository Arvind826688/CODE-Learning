// program to lower case without strlwr
#include <iostream>
#include <string.h>
using namespace std;
void functionlower(char s[]);
int main(){
    char string[100];
    cout<< " Enter a string to convert it into lower case : "<<endl;
    cin>> string;
    functionlower(string);
    cout<<"Entered string in lower case is : "<< string;
    return 0;

}

void functionlower(char s[]){
    int c = 0;
    while (s[c] != '\0'){
        if (s[c] >= 'A' && s[c] <= 'Z'){
            s[c] = s[c] + 32;
        }
        c++;
    }
}