#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s,x=0;
    for(i=0;i<n;i++) cin>>a[i];
    if(a[0]==0) s=0;
    else s=n-a[0];
    a[0]=0;
    for(i=1;i<n;i++){
        if(i%2==0){
            a[i]+=s;
            if(a[i]>n-1) a[i]-=n;
        }
        else{
            a[i]-=s;
            if(a[i]<0) a[i]+=n;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=i){
            x=1;
            break;
        }
    }
    if(x==0) cout<<"YES\n";
    else cout<<"NO\n";
}