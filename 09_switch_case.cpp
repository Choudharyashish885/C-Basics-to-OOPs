#include<iostream>
using namespace std;

int main(){
    
    int a ;
    cout<<"Enter a";
    cin>>a;

    switch (a){
        case 1:
            cout<<"1 is stored in a";
            break;

        case 2:
            cout<<"2 is stored in a";
            break;

        case 3:
            cout<<"3 id stored in a";
            break;

        default:
            cout<< "No Value Match";
            break;

    }
    
    
    return 0;
}
