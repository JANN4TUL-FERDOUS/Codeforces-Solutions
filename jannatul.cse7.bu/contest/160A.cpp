#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0,r=0,res=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    s/=2;
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        r+=a[i];
        res++;
        if(r>s) break;
    }
    cout<<res<<endl;
    return 0;
}