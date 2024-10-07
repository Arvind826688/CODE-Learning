#include <iostream>

using namespace std;

int main() { 
    int x;

    cout<< "Enter a number between 1 and seven both included  : " <<endl;
    cin>>x;

    switch(x){
        case 1: 
        cout<< " today is monday"<<endl;
        break;
        case 2:
        cout<< " today is tuesday "<<endl;
        break;
        case 3: 
        cout<< " today is wednesday " <<endl;
        break;
        case 4:
        cout<< " today is thrusday " <<endl;
        break;
        case 5: 
        cout<< " today is friday " <<endl;
        break;
        case 6:
        cout<< " today is saturday " <<endl;
        break;
        case 7: cout<< " today is sunday "<<endl; break;
        break;
        default:
        cout<< " thats not a day " <<endl;
    }
    return 0;
}

/*The break Keyword
when c++ reaches a break keyword it breaks out of the switch block 
This will stop the execution of more code blocks and case testing inside the block 
when a match is found , and the job is done , it's time for a break. there is no need for resting 
a break can save a lot of execution time because it ignores the execution of all the rest of the code in the switch blocks 


The default keyword 
it specifies the code when there is no match available for the condition */