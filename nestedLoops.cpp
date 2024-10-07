#include <iostream>
using namespace std;

int main () {
     int y;
    cout<< " enter the value of a variable int " <<endl; 
    cin >> y;

    // when we place a loop inside another loop it is called nested loop 
    for(int i=0; i<=y; ++i){
        cout<<"outer "<<i<<"\n";
        for (int j=0; j<=(y/2); ++j){
            cout<<"Inner Loop "<<j<< "\n";
        }
    }

    return 0;
}