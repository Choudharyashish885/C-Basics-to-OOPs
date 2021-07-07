#include<iostream>
using namespace std;

int main(){
    int a,b,c;

   
    cin>>a;
    cin>>b;
    cin>>c;
    

    if((a>b) && (a>c)){
        //cout<<"A is greatest"<<endl;
        cout<<a;
    }
    else if((b>a) && (b>c)){
       // cout<<"B is greatest"<<endl;
       cout<<b;
    }
    else{
        //cout<<"C is greatest"<<endl;
        cout<<c;
    }
    return 0;
}
