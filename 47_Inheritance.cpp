#include<iostream>
using namespace std;

class parent{          //Base Class or Super Class
    public:
    int id_p;
};
class child : public parent{   //sub class or derived class
    public:
    int id_c;
};

int main(){
    child ch1;
    ch1.id_c =7;
    ch1.id_p=91;
    cout<<ch1.id_c<<endl;
    cout<<ch1.id_p<<endl;

    return 0;
}