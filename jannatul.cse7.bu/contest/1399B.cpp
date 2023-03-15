#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n],b[n],x,y;
        long long s=0,s1=9999999999,s2=9999999999;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<s1) s1=a[i];
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
            if(b[i]<s2) s2=b[i];
        }
        x=0,y=0;
        for(int i=0;i<n;i++){
            x=a[i]-s1;
            y=b[i]-s2;
            s=s+x+y-min(x,y);
        }
        cout<<s<<endl;
    }
    return 0;
}