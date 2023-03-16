#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s=0;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=2;i<n;i++){
        if(a[i]<a[i-1]+a[i-2]){
            s=1;
        }
    }
    if(s==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}