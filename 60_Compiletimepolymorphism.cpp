#include<iostream>
using namespace std;

//Functionoverloading

int add(int n1,int n2){
    return n1+n2;
}
int add(int n1,int n2,int n3){
    return n1+n2+n3;
}
double add(double n1,double n2){
    return n1+n2;
}
int main(){
    
    cout<<add(10,20,30)<<endl;
    cout<<add(5.6,7.8)<<endl;
    cout<<add(10,20)<<endl;
    return 0;
}