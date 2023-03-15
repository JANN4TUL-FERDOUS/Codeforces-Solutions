#include<iostream>
using namespace std;
int main(){
    int t,s;
    long long x,y,a,b,m,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        m=a+b;
        if((y-x)%m==0) cout<<(y-x)/m<<endl;
        else cout<<"-1\n";
    }
    return 0;
}