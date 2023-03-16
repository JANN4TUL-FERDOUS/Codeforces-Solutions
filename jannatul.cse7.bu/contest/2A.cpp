#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=-999999;
    cin>>n;
    map<string,int>mp;
    string a[n];
    int b[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        mp[a[i]]+=b[i];
    }
    for(i=0;i<n;i++) s=max(s,mp[a[i]]);
    map<string,int>mp1;
    for(i=0;i<n;i++){
        mp1[a[i]]+=b[i];
        if(mp1[a[i]]>=s && mp[a[i]]==s){
            cout<<a[i]<<endl;
            break;
        }
    }

    return 0;
}