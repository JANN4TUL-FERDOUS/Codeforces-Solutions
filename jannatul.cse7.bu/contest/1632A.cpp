#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0,s=0;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<a.length();i++){
            s=a[i]-'0';
            if(s==0) s1++;
            else s2++;
        }
        if(s1>1 || s2>1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}