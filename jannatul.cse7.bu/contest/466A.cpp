#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,res;
    cin>> n>>m>>a>>b;
    res=min((n%m)*a,b);

    if(n>m)cout<<min(n*a,b*(n/m)+res);
    else cout<<min(n*a,b);
    return 0;
}