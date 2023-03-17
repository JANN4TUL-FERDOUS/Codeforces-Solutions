#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s=0,x;
        cin>>n;
        if(n%4==0){
            n/=4;
            x=sqrt(n);
            if(x*x==n) s=1;
        }
        if(n%2==0){
            n/=2;
            x=sqrt(n);
            if(x*x==n) s=1;

        }
        if(s==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}