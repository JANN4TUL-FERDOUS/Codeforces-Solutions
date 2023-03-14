#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,i,s=0,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=1;i<n;i++){
            if(!(abs(a[i]-a[i-1])==1 || (a[i]==1 && a[i-1]==n) || (a[i]==n && a[i-1]==1))){
               s=1;
               break;
            }
        }
        if(s==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}