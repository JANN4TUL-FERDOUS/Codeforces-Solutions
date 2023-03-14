#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z,m1,m2;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        m1=max(x,y);
        m2=min(y,z);
        if(x==y && y==z) cout<<"YES\n"<< x<<" "<<y<<" "<<z<<endl;
        else if((x==y&&y>z)||(y==z&&y>x)||(x==z&&x>y)){
            cout<<"YES\n"<<m1<<" "<<min(m2,x)<<" "<<1<<endl;
        }
        else{
            cout<<"NO\n";
        }
     }
     return 0;
 }