#include<iostream>
using namespace std;

int main(){
    
    //staticinitialization
    int a[5] = {0,1,2,3,4};  //giving input while running code
    for(int i=0;i<5;i++){
        cout<<a[i]<<" "<<endl;
    }
    //dynamic initializion - taking input from user
    int b[5];
    cout<<"Enter value of b array: "<<endl;
    for(int j=0;j<5;j++){
        cin>>b[j];
    }
    cout<<"b array values are: "<<endl;
    for(int j=0;j<5;j++){
        cout<<b[j]<<" ";
    }
    return 0;
}