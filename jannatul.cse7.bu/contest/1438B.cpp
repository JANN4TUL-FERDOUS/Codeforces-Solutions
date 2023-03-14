#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,s=0;
        cin>>n;
        long long a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]==a[i-1]){
                s=1;
                break;
            }
        }
        if(s==1) cout<<"YES\n";
        else cout<<"NO\n";
        }
    return 0;
}