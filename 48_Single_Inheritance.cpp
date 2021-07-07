#include<iostream>
using namespace std;

class Dimension{
    public:
    float side=10.6;
};
class Square : public Dimension{
    public:
    double area(double s){
        return s*s;
    }
};

int main(){
    Square s1;
    cout<<"Area: "<<s1.area(s1.side);
    return 0;
}