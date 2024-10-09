#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }// this is called using get and set methods (creating functions with these names to get the values of the attributes)
    // encapsulation is recommended for security of data inside the code
    
};
int main(){
    Employee TestObject;
    TestObject.setSalary(80000);
    cout<<TestObject.getSalary();
    return 0;
}