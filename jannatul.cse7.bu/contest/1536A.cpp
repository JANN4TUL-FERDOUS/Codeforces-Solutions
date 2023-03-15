#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        int x=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0) x=1;
        }
        if(x==0){
            cout<<"YES\n";
            cout<<101<<endl;
            for(int i=0;i<101;i++) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<"NO\n";
    }
    return 0;
}