#include <iostream>
using namespace std;

class FirstClass{
    public:
    int x;
    private:
    int y;
};

class SecondClass{
    int yoyo;
    int badboy;
    public:
    int ninja;
};// by default the attributes of a class are private

int main(){
    FirstClass FirstObject;
    FirstObject.x = 234;
    SecondClass SecondObject;
    cout<<FirstObject.x<<endl;
    cout<<SecondObject.ninja<<endl;
    // cannot access the attributes of second class 
    
    return 0;
}