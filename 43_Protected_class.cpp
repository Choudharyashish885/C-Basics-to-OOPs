#include<iostream>
using namespace std;

class Parent{
    protected:
        int protected_id;
};
class Student : public Parent{
    public:
        void setId(int id){
            protected_id=id;
        }
        int display_id(){
            return protected_id;
        }
};



int main(){
    Student std1;
    int s_id;
    cout<<"Enter student id: ";
    cin>>s_id;
    std1.setId(s_id);
    cout<<"Student id: "<<std1.display_id();

    return 0;
}