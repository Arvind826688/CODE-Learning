#include <iostream>
using namespace std;

int main(){

 int x;
    cout<< " enter the value of a variable x " <<endl; 
    cin >> x;
     int y;
    cout<< " enter the value of a variable y " <<endl; 
    cin >> y;


    for(int i=0; i<x; i++){
        if(i==y){
            break;
        }
        cout<<i<<"\n";
    }

    return 0;
}