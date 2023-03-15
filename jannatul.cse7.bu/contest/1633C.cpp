#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long h1,h2,m1,m2,a,b,k,s=0,s2=0,i;
        cin>>h1>>m1>>h2>>m2>>k>>a>>b;
        for(i=0;i<=k;i++){
           s2=(h2+m1+i*a-1)/(m1+i*a);
           if((h1+(k-i)*b+m2-1)/m2>=s2) s=1;
        }
        if(s==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}