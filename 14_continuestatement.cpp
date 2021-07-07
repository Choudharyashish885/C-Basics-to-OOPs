#include<iostream>
using namespace std;

int main(){
    
    for(int i=0;i<9;i++){
        if(i==4){
            continue;  //skip 4 and other will print
        }
        cout<<i<<endl;
    }
    
    return 0;
}