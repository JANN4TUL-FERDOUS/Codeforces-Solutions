#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,i,x=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++){
            if(s==1) break;
            x=1;
            for(int j=n-1;j>i;j--){
                if(x==3) {
                    s=1;
                    break;
                }
                if(a[j]==a[i]){
                    if(j!=i+1){
                        s=1;
                        break;
                    }
                    else x++;
                }
            }
        }
        if(s==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}