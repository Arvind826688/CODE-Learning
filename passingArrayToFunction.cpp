#include <iostream>
#include <string>
using namespace std;

void arrayfunction(int number[4]){
    for (int i = 0;  i<4; i++){
        cout<<number[i]<<"\n";
    }
}

int main(){
    int number[4] = {10 , 31, 312, 231};

    arrayfunction(number);
    return 0;
}