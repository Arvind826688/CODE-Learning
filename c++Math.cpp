#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // max min operators 

    int x, y ,z;
    cout<< " enter the value of the variable x and y and z : "<<endl;
    cin>> x>>y>> x;

    cout << " the max of the x and y : "<<max(x,y)<<endl;

    cout << " the mininum of the x and z : "<< min(z,x)<<endl;

    cout<< " the absolute value of x : "<<abs(x)<<endl;
    cout<< " arc cosine of the x : " << acos(x)<<endl;
    cout<< " the arc sine value of x " << asin(x)<<endl;
    cout<< " arc tangent value of x " << atan(x)<<endl;

    cout<< "cube root of the x : "<< float(cbrt(x))<<endl;

    cout<< " the value of x rounded up to its nearest integer " << ceil(x)<<endl;
    cout<< " the cosine of x " <<cos(x)<<endl;
    cout<<"hyperbolic cosine of x " << cosh(x)<<endl;


    // you don't need to cram all the functions that are inside the cmath library ,
    // but you should remember if you need any math function it might be available in cmath
    // these libraries will be used in upcoming project videos 
    // when runnning the code the we were not getting the value of arc sine and arc cosine because these functions requires their input to be in a 
    // certain range 

    


    return 0;
}