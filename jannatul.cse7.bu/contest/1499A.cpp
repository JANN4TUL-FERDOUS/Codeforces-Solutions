#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        if(w*2<=k1+k2 && b*2<=n-k1+n-k2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}