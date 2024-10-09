#include <iostream>
#include <string>
using namespace std;

class myClass{
    public:
    int firstVariable;
    int secondVariable;
    string brand;
    string model;
    int year;
    void myMethod(){
        cout<<"\nfunction inside a class means method of that function \n";
    }
    void functionfirst(string fname);
    myClass(string x, string y , int z){ // notice how it doesn't need a type to be defined 
        cout<< "\n this is the constructor of this class \n";

        brand = x;
        model = y;
        year = z;
    }


};

void myClass::functionfirst(string fname){
    cout<<"\nthis function's definition is outside the class\n"<<fname;
}

int main(){

    /* Class
    if the cars is a clss then the Volvo , audi , bmw , lamborghini are objects of the classes
    classes also has attributes, and methods , 
    attributes are the variables inside the class
    functions are the methods of the class
    each object we create inherits the attributes and methods of the class

    contructor : a special method of a class that is automatically called when an object of a class is created
    */
   //Creating the object of the class
   myClass myObject("Lambo", "aventadoor", 2024);

   myObject.firstVariable = 10;
   myObject.secondVariable = 89;
   myClass myObject2("pagani", "zonda", 2024);
   myObject2.firstVariable= 1892;
   myObject2.secondVariable=89432;

   cout<<myObject2.firstVariable<<"\n";
   cout<<myObject2.secondVariable<<"\n";
   cout<<myObject.firstVariable <<"\n";
   cout<<myObject.secondVariable<<"\n";
   myObject.myMethod();
   myObject2.functionfirst("Frodobaggs");
   cout<<"\n"<<myObject2.brand<<myObject2.model<<myObject2.year<<endl;

   cout<<myObject.brand<<myObject.model<<myObject.year<<endl;



   return 0;
}