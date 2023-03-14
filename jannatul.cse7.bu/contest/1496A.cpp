#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,k,s=0;
        cin>>n>>k;
        string a;
        cin>>a;
        if(n-1-2*k>=0){
            for(i=0;i<k;i++){
                if(a[i]!=a[n-1-i]){
                    s=1;
                    break;
                }
            }
            if(s==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}