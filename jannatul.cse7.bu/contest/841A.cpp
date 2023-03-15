#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k,a[27]={0},s2=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        int x=s[i]-96;
        a[x]++;
    }
    for(i=1;i<=26;i++){
        if(a[i]>k) {
            s2=1;
            break;
        }
    }
    if(s2==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}