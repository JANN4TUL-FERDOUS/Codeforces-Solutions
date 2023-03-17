#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s0=0,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==5) s1++;
        else if(a[i]==0) s0++;
    }
    if(s0>0) {
        int x=s1/9;
        x*=9;
        while(x--) {
            s=1;
            cout<<"5";
        }
        if(s==1) {
            while(s0--) cout<<"0";
        }
        else cout<<"0";

    }
    else cout<<"-1";
    return 0;
}