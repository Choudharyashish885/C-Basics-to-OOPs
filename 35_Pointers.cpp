#include<iostream>
using namespace std;

int main(){
    
    int a =5;
    int *ptr = &a;
    cout<<&a<<": using Referncer Operator"<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<": Using deference operator"<<endl;
    
    
    return 0;
}