#include<iostream>
using namespace std;

class Parent1{
    public:
    void par1(){
        cout<<"This is Parent 1"<<endl;
    }
};
class Parent2{
    public:
    void par2(){
        cout<<"This is Parent 2"<<endl;
    }
};
class Child : public Parent1, public Parent2{
    public:
    void child1(){
        cout<<"This is child"<<endl;
    }
};


int main(){
    Child ch1;
    ch1.par1();
    ch1.par2();
    ch1.child1();
    return 0;
}