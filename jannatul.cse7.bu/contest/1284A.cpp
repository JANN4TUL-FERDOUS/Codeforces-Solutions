#include<iostream>
using namespace std;
int main(){
    int n,m,q;
    cin>>n>>m;
    string a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    cin>>q;
    while(q--){
        long long x;
        cin>>x;
        if(x%n==0) cout<<a[n-1];
        else cout<<a[x%n-1];
        if(x%m==0) cout<<b[m-1];
        else cout<<b[x%m-1];
        cout<<endl;
    }
    return 0;
}