#include<iostream>
using namespace std;

int main(){
  
  bool machine_is_working = true;
  cout<<"Machine is Working: "<<machine_is_working<<endl;

  machine_is_working = false;
  cout<<"Machine stopped working: "<<machine_is_working<<endl;

  bool t=0;
  if(!t){
    cout<<"t is false"<<endl; //because t value is 0 and when compiler do '!t' it will give true value so t is false will print
  }
  else{
     cout<<"No output";
  }
  
  return 0;
}