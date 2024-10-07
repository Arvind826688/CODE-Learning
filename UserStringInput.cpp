#include <iostream>
#include <string>
using namespace std;

int main () {



    /*string firstName;
    cout<< " Enter your first name : ";
    cin>> firstName;
    cout<< " your first name is "<< firstName<<endl; */


    string fullName;
    cout<< " Enter your full name : ";
    getline(cin, fullName); // this will take complete line as string input 
    cout<< " your full name is " << fullName<<endl;

    // to get the complete string that uesr writes we  do different input 

    return 0; // actually even if we don't use return in c++ it will work normally 
}