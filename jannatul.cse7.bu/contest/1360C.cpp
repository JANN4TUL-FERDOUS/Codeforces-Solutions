#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2==0) s1++;
            else s2++;
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]-a[i-1]==1){
                s=1;
                break;
            }
        }
        if(s1%2==0 && s2%2==0) cout<<"YES\n";
        else if(s1%2==1 && s2%2==1 && s==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}