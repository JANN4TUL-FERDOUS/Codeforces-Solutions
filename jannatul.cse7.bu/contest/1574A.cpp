#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int s1=0,s2=0,s3=0,n,a,i,s=0;
      cin>>n;
      s=n;
      s1=n;
      while(n--){
        for(i=s;i<s1;i++) cout<<"(";
        for(i=0;i<s;i++) cout<<"()";
        for(i=s;i<s1;i++) cout<<")";
        s--;
        cout<<endl;
      }
    }
    return 0;
}