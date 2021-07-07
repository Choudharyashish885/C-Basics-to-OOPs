//In this program , I use virtual Base Class for getting values from class D

#include<iostream>
#include<conio.h>
using namespace std;

class D{
    public:
    int d;
};
class B : virtual public D{
    public:
    int b;
};
class C : virtual public D{
    public:
    int c;
};
class A : public B , public C{
    public:
    int a;
};
int main(){
    A Obj;
    Obj.d=10;   
    Obj.d=100;
    Obj.b=15;
    Obj.c=20;
    Obj.a=70;

    cout<<"D from B: "<<Obj.d<<endl;
    cout<<"D from C: "<<Obj.d<<endl;
    cout<<"B: "<<Obj.b<<endl;
    cout<<"C: "<<Obj.c<<endl;
    cout<<"A: "<<Obj.a<<endl;


    return 0;
}