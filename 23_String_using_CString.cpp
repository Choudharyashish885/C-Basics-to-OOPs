#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    char s1[100];
    char s2[100];

    cout<<"Enter s1: ";
    cin>>s1;
    cout<<"Enter s2: ";
    cin>>s2;

    cout<<"Concatenation: "<<strcat(s1,s2)<<endl;
    cout<<"Copy(strcpy(s1,s2): "<<strcpy(s1,s2)<<endl;
    cout<<"Length of s1: "<<strlen(s1)<<endl;

    return 0;

    
}