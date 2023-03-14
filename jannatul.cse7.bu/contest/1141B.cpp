#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s=0,x=0;
    for(i=0;i<n;i++) cin>>a[i];
    if(a[0]==1) s++;
    for(i=1;i<n;i++){
        if(a[i]==1) s++;
        else {
            if(x<s) x=s;
            s=0;
        }
    }
    if(a[n-1]==1){
        if(x<s) x=s;
    }
    if(x==n) cout<<"24\n";
    else{
        if(a[n-1]==1){
            i=0;
            while(a[i]!=0){
                s++;
                i++;
            }
            if(x<s) x=s;
        }
        cout<<x;
    }
    return 0;
}