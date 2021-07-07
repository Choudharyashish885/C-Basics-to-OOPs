#include<iostream>
#include<string>
using namespace std;

int main(){
    
    //string concatenation
    string s1 = "Ashish";
    string s2 = "Choudhary";
    string fullname = s1+s2;
    cout<<"fullname: "<<fullname<<endl;
    string fullnamewithspace = s1+" "+s2;
    cout<<"fullnamewithspace: "<<fullnamewithspace<<endl;
    //using append function
    string MyName = s1.append(s2);
    cout<<MyName<<endl;
    //adding two string having value as numbers
    string x = "10";
    string y = "20";
    string z = x+y;
    cout<<"concatenated x & y: "<<z<<endl;
    //string length
    cout<<"Length: "<<MyName.length()<<endl;
    cout<<"size: "<<MyName.size()<<endl; //finding length or size of string using size function
    //Accessing charaters of string(indexing)
    cout<<"3rd character of s2: "<<s2[2]<<endl;
    //changing character value of strings
    //making new string to make it easy
    string str1 = "Hello";
    str1[0] = 'J';   //changing value of H by J
    cout<<"Updated str1: "<<str1<<endl;
    return 0;
}