// program to concatenate two strings with strcat

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[50], s2[50], result[100];

    cout<< " Enter the string s1 : ";
    cin.getline(s1, 50);
    cout<< " enter the string s2 : ";
    cin.getline(s2, 50);

    strcat(s1, s2);
    cout<< " the string obtained on concatenation is : "<<s1<< endl;
    return 0;
  
}