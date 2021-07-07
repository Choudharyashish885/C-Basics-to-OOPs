#include<iostream>
using namespace std;

int main(){
    
    int a=5;//(0101)
    int b=9;//(1001)
   

    cout<<"a=5,b=9"<<endl;
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"~a: "<<(a=~a)<<endl;
    cout<<"b>>1 : "<<(b>>1)<<endl; //right shift
    cout<<"b<<1 : "<<(b<<1)<<endl; //left sight


    return 0;
}