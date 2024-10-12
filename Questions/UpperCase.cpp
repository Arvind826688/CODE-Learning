#include <iostream> 
#include <cstring>
using namespace std;

int main(){
    char string[10];
    cout<<"Enter the string that needs to be uppercased "<<endl;
    cin.getline(string, 10);

    cout<< " Character converted to upper case is : "<<strupr(string);
    return 0;


}