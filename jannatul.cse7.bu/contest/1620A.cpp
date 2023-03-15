#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int i,s=0,l=a.length();
        for(i=0;i<l;i++){
            if(a[i]=='N') s++;
        }
        if(s==1) cout<<"NO\n";
        else cout<<"YES\n";
   }
    return 0;
}