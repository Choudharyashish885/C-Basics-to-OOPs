#include<iostream>
using namespace std;
/*
class Circle{
    private:
        double radius;

    public:
        double area(){
            return 3.14*radius*radius;
        }
};
int main(){
    
    Circle obj;
    obj.radius = 14;

    cout<<"Area: "<<obj.area(); //this code will give an erro as radius is unaccessible due to private class.
    
    
    return 0;
}*/

class Circle{
    private:
        double radius;
    public:
        //int rad;
        void radius_value(double r){
            radius=r;     // we can access the private data members of a class indirectly using the public member functions of the class. 
        }
        double area(){
            return 3.14*radius*radius;      
        }
};

int main(){
    Circle Obj;
    double rad;
    cout<<"Enter Radius: ";
    cin>>rad;

    Obj.radius_value(rad);
    cout<<"Area of Circle: "<<Obj.area();
    return 0;

}