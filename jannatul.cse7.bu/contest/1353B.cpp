#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],b[n],s=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<k;i++){
            if(a[i]<b[n-1-i])
                a[i]=b[n-1-i];
        }
        for(i=0;i<n;i++){
            s+=a[i];
        }
        cout<<s<<endl;
    }
    return 0;
}