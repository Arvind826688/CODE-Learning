#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<< " enter any character : ";
    cin>> ch;

    cout<< "IT is "<< (((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? "alphabet" : "not alphabet");
    return 0;
}