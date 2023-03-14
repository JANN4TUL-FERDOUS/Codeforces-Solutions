#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int a[n],s=0,s1=0;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1 && x==a[0]) cout<<"NO\n";
        else{
            for(int i=0;i<n;i++){
                s+=a[i];
                if(s==x) swap(a[i],a[i+1]);
            }
            if(s==x) cout<<"NO\n";
            else{
                cout<<"YES\n";
                for(int i=0;i<n;i++) cout<<a[i]<<" ";
            }
            cout<<endl;

        }

    }
    return 0;
}