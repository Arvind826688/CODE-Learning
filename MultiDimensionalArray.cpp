#include <iostream>
#include <string>
using namespace std;

int main() {

    //it is an array of arrays 


    string letters[2][4] = {
        {"a","b","c","d"},
        {"z","y","x","w"}
    };

    // you can create an array with any number of dimensions 
    // there is no limit to the number of dimensions an array can have 
    // but the more dimensions you add more complex the code becomes 


    /* Accessing the elements of a multidimensional Array */

    cout<<letters[0][3]<<"\n";

    // similarly we can also change the element of the array 
     cout<<letters[1][1]<<"\n";
    letters[1][1] = " ding";
    cout<<letters[1][1]<<"\n";


    // Looping through an multidimensional array

    cout<< " Looping through an Multi dimensional Array : "<<endl;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<4; j++){
            cout<<letters[i][j]<<"\n";
        }
    }



    cout<< " Loooping through a five dimensional array  : "<<endl;


    int FiveDArray[5][5][5][5][5];

    for(int i=0; i<5;i++){
        cout<<"1d\n";
        for(int j=0; j<5; j++){
            cout<<"2d\n";
            for(int k=0; k<5; k++){
                cout<<"3d\n";
                for(int l=0; l<5; l++){
                    cout<< "4d\n";
                    for(int m=0; m<5; m++){
                        cout<<"5d"<<FiveDArray[i][j][k][l][m]<<"\n";
                    }
                }
            }
        }
    }


    // this process is very in efficient 


    // MultiDimensional array can be used to create games 
    /* assume you are building a game 
    you can have the coordinates of certain object  , players interation with a certain object , in same place and you can show this by just
    checking that whether the players coordinates interacted with any of the elements in the array or matrix
    you will learn in subsequent chapters that how important are the matrix and arrays and vectors and other concepts are once the course is over
    and we will move to the implementations and building projects */
    }
