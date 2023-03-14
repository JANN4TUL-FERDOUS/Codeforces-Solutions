#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n-1;i++){
        if(a[i]>a[0] && a[i]<a[n-1]) s++;
    }
    cout<<s<<endl;
    return 0;
}