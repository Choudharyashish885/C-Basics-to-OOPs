#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"I am there Parent"<<endl;
    }
};
class Child1:public Parent{};
class Child2:public Parent{};
int main(){
    Child1 c1;
    Child2 c2;
    return 0;
}