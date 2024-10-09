#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream MyFile("YOYO.txt");// creating and opening the file
    MyFile<<" Files can be tricky , but it is fun to use "; // writing to the file

    MyFile.close(); // closing the file 


    string mytext; // creating a string to read the file to
    ifstream ReadingFile("YOYO.txt"); // reading the file
    while(getline(ReadingFile,mytext)){ // reading the file one line at a time 
        cout<<mytext;
    }
    ReadingFile.close();// closing the file
    


}