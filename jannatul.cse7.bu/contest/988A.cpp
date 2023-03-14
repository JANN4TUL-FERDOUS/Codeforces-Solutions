#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s=1;
    cin>>n>>k;
    int a[n],b[n],c[n],j=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    c[j++]=b[0];
    for(int i=1;i<n;i++){
        if(b[i]!=b[i-1]){
            s++;
            c[j++]=b[i];
        }
    }
    if(s<k) cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<j;i++){
            if(k==0) break;
            for(int l=0;l<n;l++){
                if(c[i]==a[l]){
                    k--;
                    cout<<l+1<<" ";
                    break;
                }
            }
        }
    }
    return 0;
}