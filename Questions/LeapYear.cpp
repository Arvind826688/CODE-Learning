// program t ocheck leap year using conditional operator 
#include <stdio.h>
int main(){
    int year;
    cout<< " Enter any year : ";
    scanf("%d", &year);
    (year%4==0 && year%100 != 0) ? printf("%d is leap year", year) :
    (year%4000 == 0) ? cout<< "leap year" : cout<< year<< "is not leap year";
    return 0;
}