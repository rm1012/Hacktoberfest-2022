#include<bits/stdc++.h>
using namespace std;

void check(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;

    }
    else if(a==y){
        b=z;
        c=x;
    }
    else{
        b=x;
        c=y;
    }
    if((a*a)==(b*b+c*c)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    check(x,y,z);

}
