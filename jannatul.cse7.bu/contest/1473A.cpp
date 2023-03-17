#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int x=0,a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]<=d) x++;
        }
        if(x==n) cout<<"YES\n";
        else{
            sort(a,a+n);
            if(a[0]+a[1]>d) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}