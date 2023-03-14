#include<bits/stdc++.h>
using namespace std;
int main(){
    long t,a,b,c,n,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        x=max(a,b);
        x=max(x,c);
        y=(x-a)+(x-b)+(x-c);
        if(n>=y && (n-y)%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}