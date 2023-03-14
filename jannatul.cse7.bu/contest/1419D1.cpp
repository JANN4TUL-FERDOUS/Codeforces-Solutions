#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    long long  a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cout<<(n-1)/2<<endl;
    for(i=0;i<n/2 ;i++){
        cout<<a[n/2+i]<<" "<<a[i]<<" ";
    }
    if(n%2==1) cout<<a[n-1];

    return 0;
}