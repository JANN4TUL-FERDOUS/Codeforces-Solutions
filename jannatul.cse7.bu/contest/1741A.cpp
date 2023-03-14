#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    int l=t;
    char c;
    while(t--){
       string a,b;
       cin>>a>>b;
       int s=0,l=a.length(),l2=b.length();
       int x=a[l-1]-65;
       int y=b[l2-1]-65;
       if(x>y) c='<';
       else if(x<y) c='>';
       else{
            if(l==l2) c='=';
            else if(a[l-1]=='S'){
                if(l>l2) c='<';
                else c='>';
            }
            else{
                if(l<l2) c='<';
                else c='>';
            }
       }
       cout<<c<<endl;
    }

    return 0;
}