#include <iostream>
using namespace std; 

int main (){

    int time;

    cout<<" Enter the time : "<<endl;
    cin>>time;
    if(time>5 && time < 9){
        cout<<"time to study c++ "<<endl;

    }else if(time<12 && time >8){
        cout<<" time to study bank po "<<endl;
    }else if (time < 17 && time >11){
        cout<< " time to study for placements " <<endl;

    }else if (time >16 ){
        cout<< "time to build some good projects " <<endl;
    }else if (time >0 && time <6){
        cout<< " you need to sleep rignt now " <<endl;
    }else {
        cout<< " Stop it get some help " <<endl;
    }
    return 0;
}