#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n-1;i++){
            if(a[i]<=a[i+1]) break;
        }
        if(i==n-1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}