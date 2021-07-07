#include<iostream>
using namespace std;


int add_two_num(int n1,int n2){ //function declaration
    return (n1+n2);              //int returntype ,will return int value
}


int main(){
    
    int a,b;
    cin>>a;
    cin>>b;

    //call function
    cout<<add_two_num(a,b);
    return 0;
}