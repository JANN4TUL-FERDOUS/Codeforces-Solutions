#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,s=0,i,j;
        cin>>n>>m;
        while(n--){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b==c) s=1;
        }
        if(m%2==0 && s==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}