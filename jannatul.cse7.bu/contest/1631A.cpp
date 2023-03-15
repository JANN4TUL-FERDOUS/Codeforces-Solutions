#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        for(i=0;i<n;i++){
            if(a[i]<b[i]) swap(a[i],b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);
        cout<<a[n-1]*b[n-1]<<endl;
    }
    return 0;
}