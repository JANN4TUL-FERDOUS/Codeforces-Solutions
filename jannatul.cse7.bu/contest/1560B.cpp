#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,s=0,s1=0,s2=0;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        s=b-a;
        if(c>2*s || b>2*s) cout<<"-1\n";
        else{
            if(c>s) cout<<c+s-2*s<<endl;
            else cout<<c+s<<endl;
        }
    }
     return 0;
}