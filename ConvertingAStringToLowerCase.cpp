// convert a string to a lower case 
#include <iostream> 
#include <string.h>
using namespace std;

int main(){
    char string[10];
    cout<< " Input a string to conver to lowe case "<< endl;
    cin.getline(string, 10);
    cout<<" Character in lowercase  :  " <<strlwr(string);
    //strlwr is use to conver uppper case character to lower case 
    return 0;


}