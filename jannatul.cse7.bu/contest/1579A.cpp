#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int s1=0,s2=0,s3=0,n,i,s=0;
      string a;
      cin>>a;
      for(i=0;i<a.length();i++){
        if(a[i]=='A') s1++;
        else if(a[i]=='B') s2++;
        else if(a[i]=='C') s3++;
      }
      if(s1+s3==s2) cout<<"YES\n";
      else cout<<"NO\n";
    }
    return 0;
}