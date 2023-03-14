#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q,s,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>> q;
    for(i=0;i<q;i++){
        cin>>m;
        s=upper_bound(a,a+n,m)-a;
        cout<<s<<endl;
    }
    return 0;
}