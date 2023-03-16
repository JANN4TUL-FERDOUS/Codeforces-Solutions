#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a;
        cin>>a;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int i,j=0,s=0;
            for(i=0;i<l;i++){
                if(a[i]==a[l]){
                    s=1;
                    break;
                }
            }
            for(i=r+1;i<n;i++){
                if(a[i]==a[r]){
                    s=1;
                    break;
                }
            }
            if(s==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}