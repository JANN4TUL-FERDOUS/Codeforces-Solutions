#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,s=0,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
            s+=b[i];
            if(s1<s) s1=s;
        }
        s2=s1;
        for(int i=0;i<n;i++){
            s1+=a[i];
            if(s1>s2) s2=s1;
        }
        cout<<s2<<endl;
    }
    return 0;
}