#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Ashish";
    string s2 = "Choudhary";
    swap(s1[0],s2[0]);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}