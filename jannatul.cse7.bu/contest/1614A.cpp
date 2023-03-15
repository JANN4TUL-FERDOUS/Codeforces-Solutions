#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r,k,s=0,s2=0;
        int n,i;
        cin>>n>>l>>r>>k;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]>=l && a[i]<=r && k>=a[i]){
                s++;
                k-=a[i];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}