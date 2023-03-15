#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l=t;
    while(t--){
        int l,i,s=0,s2=0,s3=0;
        string a;
        cin>>a;
        l=a.length();
        for(i=0;i<l;i++){
            if(a[i]=='A') s++;
            else {
                s3=1;
                s--;
            }
            if(s<0) {
                s2=1;
                break;
            }
        }
        if(s3==1 && s2==0 && a[l-1]=='B') cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}