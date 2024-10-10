#include <iostream> 
#include <cstring>
using namespace std;

int main () {
    char s1[50], s2[50], result[100];
    cout<< " Enter string s1 : ";
    cin.getline(s1, 50);
    cout<< " Enter string : ";
    cin.getline(s2, 50);
    strcat(s1,s2);
    cout<< " String obtained on concatenation is : "<< s1 << endl;
    return 0; 

}