#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        long long k,s;
        cin>>n>>k;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        s=a[n-1]-a[0]+1;
        if(s/2>k) cout<<"-1\n";
        else cout<<a[0]+k<<endl;
    }
    return 0;
}