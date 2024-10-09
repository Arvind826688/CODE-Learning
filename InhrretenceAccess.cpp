#include <iostream>
#include <string>
using namespace std;

class employee{
    protected: //it is similar to private but with one difference that it can be accessed by the inherited class (which is not allowed in private access specifier)
    int salary;
};

//derived class
class Programmer:public employee{
    public:
    int bonus;
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main (){
    Programmer myObje;
    myObje.setSalary(90000);
    myObje.bonus = 13000;
    cout<<" Salary "<<myObje.getSalary()<<"\n";
    cout<<" Bonus " <<myObje.bonus<<endl;
    return 0;
}