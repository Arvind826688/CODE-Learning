#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int year;
     std::cout<< "Enter any year : ";
     scanf("%d", &year);
     (year%4 == 0 && year%100 != 0) ? printf("%d is leap year", year) : (year%400 == 0) ? cout<< "leap year " : cout<<year<<"is not leap year ";
     return 0;


}