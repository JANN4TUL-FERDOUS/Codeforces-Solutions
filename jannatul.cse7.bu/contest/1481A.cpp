#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y;
    string a;
    cin>>t;
    while(t--){
        int m=0,n=0;
        char c,d,r=0;
        cin>>x>>y;
        cin>>a;
        if(x>0) c='R';
        else c='L';
        if(y>0) d='U';
        else d='D';
        x=abs(x);
        y=abs(y);
        for(int i=0;i<a.length();i++){
            if(m<x){
                if(a[i]==c) m++;
            }
            if(n<y){
                if(a[i]==d) n++;
            }
            if(m==x && n==y){
                r=1;
                break;
            }
        }
        if(r==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}