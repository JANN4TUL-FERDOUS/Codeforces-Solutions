#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i-=2) s+=a[i]-a[i-1];
    cout<<s<<endl;
    return 0;
}