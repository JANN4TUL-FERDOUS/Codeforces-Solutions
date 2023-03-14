#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,s=0,s2=0,i,j;
       cin>>n;
       string c,a;
       cin>>a;
       char b='a';
       for(i=0;i<n;i++){
          if(i+2<n && a[i+2]=='0' ){
            if(a[i+3]=='0' && i+3<n){
               s2=a[i]-'0';
                b='a'+(s2-1);
                c+=b;
            }
            else{
                s2=(a[i]-'0')*10+a[i+1]-'0';
               // cout<<s2<<" ";
                b='a'+(s2-1);
               // cout<<b<<" ";
                c+=b;
                i+=2;
            }
          }
          else{
            s2=a[i]-'0';
            b='a'+(s2-1);
            c+=b;
          }
       }
       cout<<c<<endl;

    }
    return 0;
}