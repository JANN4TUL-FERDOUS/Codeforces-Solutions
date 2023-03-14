#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,w,i,j,s1=0,s2=0,s3=0,s4=0,s7=0;
        cin>>n;
        int a[n],b[n],s=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) s1++;
            else s2++;
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==1) s3++;
            else s4++;
            if(a[i]!=b[i]) s7++;
        }
        s=min(abs(s1-s3),abs(s4-s2));
        if(s7!=s) s++;
        cout<<s<<endl;
    }
    return 0;
}