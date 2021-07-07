#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        if(i==4){
            break;     //print value up to 4
        }
        cout<<i<<endl;
    }
    return 0;
}