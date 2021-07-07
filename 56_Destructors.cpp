#include<iostream>
using namespace std;

class Demo{
    public:
    int num1,num2;
    Demo(int n1,int n2){
        num1=n1;
        num2=n2;
        cout<<"Instructor"<<endl;
    }
    void display(){
        cout<<"n1= "<<num1<<endl;
        cout<<"n2= "<<num2<<endl;
    }
    ~Demo(){
        cout<<"destructor";
    }
};


int main(){
    Demo obj(10,20);
    obj.display();
    return 0;
}