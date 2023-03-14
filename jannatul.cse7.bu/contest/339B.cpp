#include<bits/stdc++.h>
using namespace std;
int main(){
    long  n,m,s=1;
    cin>>n>>m;
    long long res=0;
    while(m--){
        long a;
        cin>>a;
        if(a>s){
            res+=a-s;
            s=a;
        }
        else if(a<s){
            res+=n-s+a;
            s=a;
        }
    }
    cout<<res<<endl;
    return 0;
}