#include<iostream>
using namespace std;

class GrandParent{
    public:
    string name;
    void get_name(string n){
        name=n;
    }
    void show_name(){
        cout<<"Name: "<<name<<endl;
    }
};
class Parent : public GrandParent{
    public:
    int age;
    void get_age(int a){
        age=a;
    }
    void show_age(){
        cout<<"Age: "<<age<<endl;
    }
};
class Child : public Parent{
    public:
    string gender;
    void get_gender(string g){
        gender=g;
    }
    void show_gender(){
        cout<<"Gender: "<<gender<<endl;
    }
};

int main(){
    Child c1;
    c1.get_name("Ashish");
    c1.get_age(20);
    c1.get_gender("Male");

    c1.show_name();
    c1.show_age();
    c1.show_gender();

    return 0;
}