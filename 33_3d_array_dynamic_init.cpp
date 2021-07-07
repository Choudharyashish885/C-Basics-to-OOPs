#include<iostream>
using namespace std;

int main(){
    
    
    int x[2][4][3];
    cout<<"Input 3d array values: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                cout<<"x["<<i<<"]["<<j<<"]["<<k<<"]: ";
                cin>>x[i][j][k];
            }
        }
    }
    cout<<"3d array values are: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                cout<<"x["<<i<<"]["<<j<<"]["<<k<<"]: "<<x[i][j][k]<<endl;
            }
        }
    }
    return 0;
}