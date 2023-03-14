#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n*n],s=1;
        if(n==2) cout<<"-1\n";
        else{
            for(i=1;i<=n*n;i++){
                a[i]=s;
                if(s==n*n || s==n*n-1) s=0;
                s+=2;
            }
            for(i=1;i<=n*n;i++){
                if(i%n==0) cout<<a[i]<<endl;
                else cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}