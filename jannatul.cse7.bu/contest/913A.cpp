#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,s;
    cin>>n>>m;
    s=pow(2,n);
    if(s>m) cout<<m;
    else cout<<m%s;
    return 0;
}