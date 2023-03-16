#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,s=0;
        cin>>a>>b>>c;
        s=a+b+c;
        if(s%9==0 && min(a,min(b,c))>=s/9) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}