#include<iostream>
using namespace std;

class Demo{
    private:
    int n1,n2;
    public:
    Demo(){
        n1=10;
        n2=20;
    }
    void display(){
        cout<<"a: "<<n1<<endl;
        cout<<"b: "<<n2<<endl;
    }
};

int main(){
    Demo obj;
    obj.display();
    return 0;
}