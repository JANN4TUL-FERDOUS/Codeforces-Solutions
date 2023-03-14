#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,i=0;
        cin>>x>>y;
        if(3*x==2*y || x>=y) cout<<"YES\n";
        else{
            if(x<4) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}