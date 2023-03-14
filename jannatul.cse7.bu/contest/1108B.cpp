#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s,x=0,s1=0,s2=0,b[130]={0};
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]<<" ";
    for(i=0;i<n-1;i++){
        if(a[n-1]%a[i]==0 && a[i]!=a[i+1]) b[i]=1;
    }
    for(i=n-2;i>=0;i--){
        if(b[i]==0) {
            cout<<a[i];
            break;
        }
    }
    return 0;
}