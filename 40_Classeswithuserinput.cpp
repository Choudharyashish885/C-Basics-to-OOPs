#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    string name;

    void put_details(int i,string n){
        id = i;
        name = n;
    }
    void get_details(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    Student s1;
    int s_id;
    string s_name;
    cout<<"Enter name of student: ";
    getline(cin,s_name);
    cout<<"Enter id of student: ";
    cin>>s_id;
    

    s1.put_details(s_id,s_name);
    s1.get_details();
    return 0;

} 