#include<iostream>
using namespace std;


int add(int x,int y){
    return x+y;
}
double add(double x,double y){
    return x+y;
}


int main(){
    int a,b;
    double c,d;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;
    cout<<"Enter d: "<<endl;
    cin>>d;

    cout<<"Double: "<<add(c,d)<<endl;
    cout<<"Integer: "<<add(a,b);
    return 0;
}