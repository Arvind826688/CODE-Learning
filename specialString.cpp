#include <iostream>
#include <string>
using namespace std;

int main () {

    string txt = "This is a sample string with \"double quotes\" inside it "; // this string will confuse the compiler 

    // to input single quote we use \' 
    // to input double quotes we use \"
    //to input backslash we use \\ 
    // these characters are called escape characters 
    // other escape characters are \n adds a new line
    // \t creates a horizontal tab (space)
    

    cout<< txt<<endl;

    return 0;
}