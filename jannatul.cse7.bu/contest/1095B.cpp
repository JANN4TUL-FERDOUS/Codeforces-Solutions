#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cout<<min((a[n-2]-a[0]),(a[n-1]-a[1]))<<endl;
    return 0;
}