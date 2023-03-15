#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b) swap(a,b);
        if(c<d) swap(c,d);
        if(b>c || d>a) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}