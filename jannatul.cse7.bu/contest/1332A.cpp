#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d,x,y,x1,x2,y1,y2,s=0;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if(x1==x2 && a>0 && b>0) s=1;
        if(y1==y2 && c>0 && d>0) s=1;
        if(a>b && x-(a-b)<x1) s=1;
        else if(a<b && x+b-a>x2) s=1;
        if(c>d && y-(c-d)<y1) s=1;
        else if(c<d && y+d-c>y2) s=1;
        if(s==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}