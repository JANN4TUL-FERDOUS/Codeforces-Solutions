#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,a,i,s=0,s2;
        int x=0;
        cin>>n;
        n--;
        s=n/2;
        for(i=2;i<=n/2;i++){
            if(__gcd(i,n-i)==1){
                cout<<i<<" "<<n-i<<" "<<"1\n";
                break;
            }
        }
   }
    return 0;
}