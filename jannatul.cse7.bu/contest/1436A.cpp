#include<iostream>
using namespace std;
int main(){
    int t,n,s;
    long m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n];
        s=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            s+=a[i];
        }
        if(s==m) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}