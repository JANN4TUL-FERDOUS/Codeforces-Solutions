#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,i,s=0;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        s+=i;
        if(s-n+i==k) {
            cout<<n-i<<endl;
            break;
        }
    }
    return 0;
}