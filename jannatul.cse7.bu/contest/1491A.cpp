#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,x,i,s=0;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    while(t--){
        cin>>k>>x;
        if(k==1) {
            if(a[x-1]==0) s++;
            else s--;
            a[x-1]=1-a[x-1];
        }
        else{
            if(x>s) cout<<"0\n";
            else cout<<"1\n";
        }
    }
    return 0;
}