#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b,s=0;
    cin>>n;
    int x[n];
    x[0];
    for(i=1;i<n;i++) cin>>x[i];
    cin>>a>>b;
    for(i=a;i<b;i++) s+=x[i];
    cout<<s<<endl;
    return 0;
}