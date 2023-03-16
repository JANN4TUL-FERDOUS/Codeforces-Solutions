#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int l=a.length();
        int b[l],x=0;
        for(int i=0;i<l;i++){
            b[i]=a[i]-'0';
        }
        sort(b,b+l);
        for(int i=1;i<l;i++){
            if(b[i]-b[i-1]!=1){
                x=1;
                break;
            }
        }
        if(x==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}