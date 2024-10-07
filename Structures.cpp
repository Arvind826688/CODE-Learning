#include <iostream>
#include <string>
using namespace std;

int main(){

    /*C++ Structures 
    Structures also called structs , are a way to group several related variables into one place . Each Variable in the structures is known as a member of the structure.
    Unlike an array, a structure can contain 
    many different data types ( int , string, bool etc.)
    to use structure we use struct keyword , */


    struct {
        int TestNumber;
        string TestString;
    } TestStructure;

    TestStructure.TestNumber = 1;
    TestStructure.TestString = " Hello broooooo";

    cout<<TestStructure.TestNumber<<"\n";
    cout<<TestStructure.TestString<<"\n";



    struct { 
        int TestNumbers2;
        string TestString2;

    } TestStructure2, TestStructure3, TestStructure4;

    TestStructure.TestNumber = 2;
    TestStructure2.TestNumbers2 = 3;
    TestStructure3.TestNumbers2= 4;
    TestStructure4.TestNumbers2 = 5;
    TestStructure.TestString = " Hello " ;
    TestStructure2.TestString2 = " bro ";
    TestStructure3.TestString2 = " yo ";
    TestStructure4.TestString2 = " i don't know " ;


    //DOING THE SAME THING BUT 
}