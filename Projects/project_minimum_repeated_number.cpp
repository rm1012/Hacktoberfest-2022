#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N=1e4+2;
    int idx[N];
    int minidx=INT_MAX;
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);

        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
         cout<<minidx+1;

    }
   

}
