#include <iostream>
using namespace std;

int main() { 
    int x;
    cout<< " enter the value of a variable int " <<endl; 
    cin >> x;

    while (x<10){
        cout<<x<<"\n";
        ++x;
    }

    return 0; 
}