#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,i;
    cin>>n>>q;
    string a;
    cin>>a;
    int b[n+1];
    b[0]=0;
    for(i=0;i<n;i++) b[i+1]=a[i]-96+b[i];
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<b[r]-b[l-1]<<endl;
    }
    return 0;
}