#include<iostream>
using namespace std;

int main(){
    
    bool a = true;
    bool b = false;

    //LogicalAND
    cout<<(a&&a)<<endl;
    cout<<(b&&b)<<endl;
    cout<<(a&&b)<<endl;
    cout<<(b&&a)<<endl;
    //LogicalOR
    cout<<(a||a)<<endl;
    cout<<(b||b)<<endl;
    cout<<(a||b)<<endl;
    cout<<(b||a)<<endl;
    //LogicalNOT
    cout<<(!a)<<endl;
    cout<<(!b)<<endl;



    
    return 0;
}