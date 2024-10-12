// program to reverse a string

#include <iostream>
#include <string.h>
using namespace std;

#define MAX_SIZE 100
using namespace std;
 int main(){

    int i, j, lenght;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];
    cout<<"Enter a string : ";
    cin.getline(string , 50);
    lenght = strlen(string);
    j=0;
    for(i=lenght-1; i>=0; i--){
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';
    cout<<reverse;
    return 0;
 }