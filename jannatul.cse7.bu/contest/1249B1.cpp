#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,j=0,s,a[n],b[n];
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=n;i++){
            s=1;
            int x=i;
            while(a[x]!=i){
                x=a[x];
                s++;
           }
           b[j++]=s;
        }
        for(i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}