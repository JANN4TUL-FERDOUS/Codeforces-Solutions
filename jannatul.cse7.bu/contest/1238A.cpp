#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        long long x,y,s=0;
        cin>>x>>y;
        s=x-y;
        if(x%2!=y%2){
            if(s>=2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}