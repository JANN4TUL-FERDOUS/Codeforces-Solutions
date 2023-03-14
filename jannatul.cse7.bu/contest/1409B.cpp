#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a,b,x,y,s1,s2,n,c,d;
    cin>>t;
    while(t--){
        s1=0,s2=0;
        cin>>a>>b>>x>>y>>n;
        if(a>b){
            swap(a,b);
            swap(x,y);
        }
        c=a;
        d=b;
        s2=a-x;
        if(n>=s2) {
            a=x;
            if(b-y>=n-s2) b=b-n+s2;
            else b=y;
        }
        else a-=n;
        s2=d-y;
        if(n>=s2){
            d=y;
            if(c-x>=n-s2) c=c-n+s2;
            else c=x;
        }
        else d-=n;
        cout<<min(a*b,c*d)<<endl;
    }
    return 0;
}