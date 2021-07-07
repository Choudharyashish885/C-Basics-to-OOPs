#include<iostream>
using namespace std;

class F{
    public:
    F(){
        cout<<"Class F"<<endl;
    }
};
class G{
    public:
    G(){
        cout<<"Class G"<<endl;
    }
};
class E:public F,public G{}; //multiple inheritance derived class
class B : public F{     //multilevelderivedclass1
    public:
    B(){
        cout<<"Class B"<<endl;
    }
};
class A:public B{};   //multilevelderivedclass2 & Hierarchicalderivedclass1
class C:public B{};  //Hierarchicalderivedclass2
int main(){
    E e1;
    B b1;
    A a1;
    C c1;
    return 0;
}