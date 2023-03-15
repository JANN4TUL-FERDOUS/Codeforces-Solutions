#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,s=0;
        cin>>n;
        int a[n],j;
        for(i=1;i<=n;i++) cin>>a[i];
        if(a[n]==0){
            for(i=1;i<=n;i++) cout<<i<<" ";
            cout<<n+1<<endl;
        }
        else if(a[1]==1){
            cout<<n+1<<" ";
            for(i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else{
            for(i=1;i<n;i++){
                if(a[i]==0 && a[i+1]==1){
                    j=i;
                    s=1;
                    break;
                }
            }
            if(s==0) cout<<"-1\n";
            else{
                for(i=1;i<=n;i++){
                    cout<<i<<" ";
                    if(i==j) cout<<n+1<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}