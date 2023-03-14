#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,s,s1;
        cin>>a>>b>>n>>s;
        s1=min(s/n,a);
        if(s1*n+b>=s) cout<<"YES\n";
        else cout<<"NO\n";
   }
   return 0;
}