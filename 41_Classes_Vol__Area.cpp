#include<iostream>
using namespace std;


class Room{
    public:

    double length;
    double breadth;
    double height;
    void put_details(double l,double b,double h){
        length=l;
        breadth=b;
        height=h;

    }
    double calculateArea(){
        return length*breadth;
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};


int main(){
    Room room1;
    double r_length;
    double r_breadth;
    double r_height;
    cout<<"Enter Length: ";
    cin>>r_length;
    cout<<"Enter Breadth: ";
    cin>>r_breadth;
    cout<<"Enter Height: ";
    cin>>r_height;

    room1.put_details(r_length,r_breadth,r_height);
    cout<<"Area Of Room1: "<<room1.calculateArea()<<endl;
    cout<<"volume of Room1: "<<room1.calculateVolume()<<endl;

    return 0;
}