#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        int s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++)
            if(a[i]-a[i-1]>1) s++;
        if(s>0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}