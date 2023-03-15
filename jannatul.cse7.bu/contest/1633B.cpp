#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s1=0,s2=0,s=0;
        string a;
        cin>>a;
        for(i=0;i<a.length();i++){
            if(a[i]=='0') s1++;
            else s2++;
            if(s1!=s2) s=max(s,min(s1,s2));
        }
        cout<<s<<endl;
    }
    return 0;
}