#include <iostream>
using namespace std;

int main() {


    int x;
    int y = 21;
    cin>>x; // x is age

    if (x>y){
        cout<<" You are of officially drinking age ";
    } else {
        cout<< " you need to wait for : "<< y-x<<" years before you can drink "<<endl;
    }

    return 0;
}