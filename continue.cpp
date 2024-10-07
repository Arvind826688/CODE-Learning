#include <iostream>
using namespace std;

int main () {   

    for (int i = 0 ; i<10; i++){
        if(i==4){
            continue;
        }
        cout<<i<<"\n";
    }

    return 0;
}// the continue keyword skips the loop for that value and goes to the next value 