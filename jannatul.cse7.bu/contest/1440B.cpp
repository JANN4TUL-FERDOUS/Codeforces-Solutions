#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,k;
        cin>>n>>k;
        long long a[n*k],s=0,s1,s2;
        s1=n*k;
        for(i=0;i<s1;i++) cin>>a[i];
        sort(a,a+s1);
        s2=n-(n+1)/2+1;
        while(k--){
            i-=s2;
            s+=a[i];
            //cout<<i<<" "<<a[i-s2]<<" ";
        }
        cout<<s<<endl;
    }
    return 0;
}