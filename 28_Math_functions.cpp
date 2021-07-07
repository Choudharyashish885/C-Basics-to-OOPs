#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){
    
    double a = 2;
    double b = 4;
    double c = 5.8;
    int d = -5;

    cout<<"sin(2): "<<sin(a)<<endl; //takes value in radian
    cout<<"cos(4): "<<cos(b)<<endl; //takes value in radian
    cout<<"tan(2): "<<tan(a)<<endl; //takes value in radian
    cout<<"sqrt(4): "<<sqrt(b)<<endl;
    cout<<"pow(2,4)_2 to the power 4: "<<pow(a,b)<<endl;
   
    cout<<"Floor(5.8): "<<floor(c)<<endl; //gives lesser or equal value 
    cout<<"max(2,4): "<<max(a,b)<<endl;
    cout<<"min(2,4): "<<min(a,b)<<endl;
    cout<<"round(5.8): "<<round(c)<<endl;
    cout<<"log(2): "<<log(a)<<endl;

    
    return 0;
}