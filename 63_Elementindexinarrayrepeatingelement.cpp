#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x){
    int i,count=0;
    int res;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
            res=i;
            continue;
        }
    }
    if(count>0){
        return res;
    }
    else{
        return -1;
    }
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
    cout<<result;
}