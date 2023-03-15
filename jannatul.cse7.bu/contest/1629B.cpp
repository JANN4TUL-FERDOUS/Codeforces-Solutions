#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,l1,l2,s=0;
        cin>>l1>>l2>>k;
        s+=(l1%2)+(l2-l1)/2;
        if(l1%2==0) s+=(l2%2);
        if((l1==l2 && l1!=1) || s<=k) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}