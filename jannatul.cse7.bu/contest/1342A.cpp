#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    long long x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        long long m;
        m=min(x,y);
        m*=b;
        m+=abs(x-y)*a;
        cout<<min(m,(x+y)*a)<<endl;
    }
    return 0;
}