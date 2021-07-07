#include<iostream>
using namespace std;

int main(){

    int a =10;
    int b=20;
    int c=5;

    if(a>b){
        if(a>c){
            cout<<"A is greatest"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"B is greatest"<<endl;
        }
        else{
            cout<<"C is greatest"<<endl;
        }
        
    }
    return 0;
}