// using the keyword endl 

/* this is a multiline comment 
in this code if we remove all the std and put using namespace std; in the top 
just below the header inclusion we can avoid using std keyword repeatedly */
#include <iostream>
int main(){
    std::cout<< "different keyword"<<std::endl;
    std::cout<<"we will use \n\n"; // this should create two line break one to new and other blank
    std::cout<< " Final line";
    return 0;
}