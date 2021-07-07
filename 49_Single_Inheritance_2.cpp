#include<iostream>
using namespace std;

class Vehicle{
    public:
    int mileage = 30;   //in kms
    int cost = 300000;  //indian rupeee
    void vehicle_details(){
        cout<<"Vehicle"<<endl;
        cout<<"Vehicle Mileage: "<<mileage<<endl;
        cout<<"Vehicle Cost: "<<cost<<endl;
    }
};
class Car : public Vehicle{
    public:
    string color = "Blue";
    int seats = 4;

    void car_details(){
        cout<<"Car"<<endl;
        cout<<"Car Color: "<<color<<endl;
        cout<<"Seats in Car: "<<seats<<endl;
    }
};

int main(){
    Car c1;
    cout<<"Car Details: "<<endl;
    c1.car_details();
    cout<<"Vehicle Details: "<<endl;
    c1.vehicle_details();
    return 0;
}