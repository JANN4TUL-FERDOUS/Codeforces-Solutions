#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    int i,s1=0,s2=0;
    cin>>a;
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            if(a[i]=='S') s1++;
            else s2++;
        }
    }
    if(s1>s2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}