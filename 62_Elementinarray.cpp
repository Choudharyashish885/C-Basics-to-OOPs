#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x){
    int i;
    int res;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            res=i;
            continue;
        }
        else{
            res=-1;
        }
    }
    return res;
}


int main(){
    int n,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result = search(arr,n,x);
    if(result>0){
        cout<<result;
    }
    else{
        cout<<result;
    }
}