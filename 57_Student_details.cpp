#include  <bits/stdc++.h>
using namespace std;
class Student {
    int rollno;
    string name;
    float marks;
    char grade;
    public:
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
    void setrollno(int r){
        rollno=r;
    }
    int getRollno() {
        return rollno;
    }
    void setMarks(float m){
        marks=m;
    }
    int getMarks() {
        return marks;
    }
    void setGrade() {
        if (marks > 90) grade = 'A';
        else if (marks > 80){grade = 'B';}
        else if (marks > 70) grade = 'C';
        else if (marks > 60) grade = 'D';
        else grade = 'E';
    }
    char getgrade(){
        return grade;
    }
};
int main(){
    Student s1;
    int r;
    float m;
    string n;
    cout<<"Name: ";
    getline(cin,n);
    cout<<"Roll No: ";
    cin>>r;
    cout<<"Marks: ";
    cin>>m;
    s1.setrollno(r);
    s1.setName(n);
    s1.setMarks(m);
    s1.setGrade();
    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Roll No: "<<s1.getRollno()<<endl;
    cout<<"Marks: "<<s1.getMarks()<<endl;
    cout<<"Grade: "<<s1.getgrade()<<endl;



    return 0;
}