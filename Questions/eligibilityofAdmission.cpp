// program to find the eligibility of admission for an engineering course based on the following criteria 
#include <iostream>
using namespace std;

int main(){
    int candidateage;
    cout<< " Input the age of the candidate : "<<endl;
    cin>> candidateage;

    if (candidateage < 18){
        cout<<" Sorry , you are not eligible to caste your vote"<<endl;
        cout<<" you would be able to caste your vote after " << 18- candidateage<<" year "<< endl;

    }
    else{
        cout<< " congratulations  you are eligible for casting your vote "<< endl;

    }
    return 0;
}