#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long i,n,k,s1=0,s=0,s2=1099999999;
        cin>>n>>k;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
               s1=1;
               if(n/i<=k) s2=min(i,s2);
               if(i<=k) s2=min(n/i,s2);
            }
        }
        if(s1==1) cout<<s2<<endl;
        else cout<<n<<endl;
    }
    return 0;
}