#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s=0;
    cin>>n>>m;
    s=n;
    while(n>=m){
        s+=n/m;
        n=n/m+n%m;
    }
    cout<<s<<endl;
    return 0;
}