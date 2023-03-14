#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,s=0,x=0;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(n%2==0) cout<<a[n/2-1];
    else cout<<a[n/2];
    return 0;
}