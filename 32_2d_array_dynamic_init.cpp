#include<iostream>
using namespace std;

int main(){
    
    int x[3][2];
    cout<<"input 2d array values: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>x[i][j];
        }
    }
    cout<<"2d array values are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<"x["<<i<<"]["<<j<<"]: "<<x[i][j]<<endl;
        }
    }
    return 0; 
}