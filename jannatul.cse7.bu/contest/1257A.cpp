#include<iostream>
using namespace std;
int main(){
    int t,n,x,a,b;
    cin>>t;
    while(t--){
        cin>>n>>x>>a>>b;
        if(a<b) swap(a,b);
        int s=a-b;
        if(x>=n-s) cout<<n-1<<endl;
        else cout<<s+x<<endl;
    }
    return 0;
}