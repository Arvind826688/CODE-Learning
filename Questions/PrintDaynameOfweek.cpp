#include <iostream>
using namespace std;
int main(){
    int week;
    cout<< " enter week number (1-7) : ";
    cin>> week;
    if(week == 1)
    {
        cout<< "monday";
    }
    else if(week ==2){cout<<" tuesday ";}
    else if(week ==3){cout<< " wednesday";}
    else if(week== 4){cout<< "thrusday";}
    else if(week==5){cout<<"Friday";}
    else if(week==6){cout<<"Saturday";}
    else if(week == 7){cout<<"sunday";}
    else{ cout<< "Invalid inpu! Please enter week in between 1-7";}
    return 0;
}