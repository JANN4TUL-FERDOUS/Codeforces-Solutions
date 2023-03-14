#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,x;
    cin>>n;
    for(i=-n;i<=n;i++){
        x=n-abs(i);
        for(j=0;j<abs(i);j++) cout<<"  ";
        for(j=0;j<x;j++) cout<<j<<" ";
        for(j=x;j>0;j--) cout<<j<<" ";
        cout<<"0"<<endl;
    }
    return 0;
}