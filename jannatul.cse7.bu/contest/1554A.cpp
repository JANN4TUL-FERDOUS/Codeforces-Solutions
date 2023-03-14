#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        long long x=a[0]*a[1],x1=0;
        for(i=1;i<n;i++){
            x1=a[i]*a[i-1];
            if(x1>x) x=x1;
       }
        cout<<x<<endl;
    }
    return 0;
}