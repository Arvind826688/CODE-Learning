#include <iostream>
using namespace std;

int sum(int x, int y);
int main(){
    cout<<sum(43, 32)<<"\n";
    cout<<sum(432, 9283)<<"\n";
    return 0;
}

int sum(int x, int y){
    return x+y;
}