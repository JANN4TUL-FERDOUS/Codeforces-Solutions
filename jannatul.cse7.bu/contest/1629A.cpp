#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s=0,x,y,i;
        cin>>n>>k;
        pair<int,int>a[n];
        int b[n],c[n];
        for(i=0;i<n;i++) cin>>b[i];
        for(i=0;i<n;i++){
            cin>>c[i];
            a[i]={b[i],c[i]};
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i].first<=k) k+=a[i].second;
        }
        cout<<k<<endl;
    }
    return 0;
}