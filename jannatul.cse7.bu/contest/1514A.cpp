#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int d,s=0;
        for(i=0;i<n;i++)    cin>>a[i];
        for(i=0;i<n;i++){
            int d=sqrt(a[i]);
            if(d*d!=a[i]){
                s=1;
                break;
            }
        }
        if(s==0) cout<<"No\n";
        else cout<<"YES\n";
    }
    return 0;
}