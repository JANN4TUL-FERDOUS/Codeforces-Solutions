#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,i,n,s=0;
    cin>> n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    k=5-k;
    for(i=0;i<n;i++){
        if(a[i]<=k) s++;
    }
    cout<<s/3;
    return 0;
}