#include <iostream>
using namespace std;
int main (){

    int x = 5;
    cout<<"value of x : " <<x<<endl;
    
    int test = 8;
    cout<< "value of test : " <<test<<endl;

    test += x;
    cout<< " value of test afther  += : "<<test<<"value of x after it : "<<x<<endl;

    test=+x;
    cout<< " value of test afther =+ : "<<test<<"value of x : " <<x<<endl;

    test-=x;
    cout<<" Value of test after -= : "<<test<<" Value of x after it : " <<x<<endl;
    
    test=-x;
    cout<<" Value of test after -= : "<<test<<" Value of x after it : " <<x<<endl;

    test ;



    return 0;
}