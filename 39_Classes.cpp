#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    void get_details(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};



int main(){
    Student s1;
    s1.id=1;
    s1.name="Ashish Choudhary";
    s1.get_details();
    return 0;
}