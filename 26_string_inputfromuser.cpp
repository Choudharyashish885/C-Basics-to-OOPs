#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string MyName;
    cout<<"Enter your name: ";
    cin>>MyName;
    cout<<"Your Name is:"<<MyName<<endl;
    //output will print only first word if we take more than word 
    //example - if input is "Ashish Choudhary" then at output it will only give "Ashish"
    //so we use getline function for user input

    return 0;
}