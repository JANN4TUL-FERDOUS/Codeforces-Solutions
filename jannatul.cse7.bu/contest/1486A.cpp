#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n],s1=0,s2=0,x=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1+=i;
            s2+=a[i];
            if(s2<s1) x=1;
        }
        if(x==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}