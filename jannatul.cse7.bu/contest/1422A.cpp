#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c;
        if(a>b && a>c) cout<<a+abs(b-c)<<endl;
        else if(b>a && b>c) cout<<b+abs(a-c)<<endl;
        else cout<<c+abs(a-b)<<endl;
    }
    return 0;
}