#include<iostream>
using namespace std;

int main(){
    
    //onedimensionalarray
    int age[5] = {15,12,25,14,36};
    cout<<"age[3]: "<<age[3]<<endl; //accessing value of array
    //twodimensionalarray
    int a[2][3] = {0,2,1,4,3,7};
    cout<<"a[0][0]: "<<a[0][0]<<endl;
    cout<<"a[1][2]: "<<a[1][2]<<endl; //accessing value of array
    //threedimensionalarray
    int b[2][3][2] = {{{4,8},{3,4},{1,6}},{{3,6},{5,4},{9,4}}};
    cout<<"b[1][2][1]: "<<b[1][2][1]<<endl;  //last element of array index (n-1) //accessing value of array
    
    return 0;
}