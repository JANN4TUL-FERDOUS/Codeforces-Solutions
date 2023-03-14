#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,s=0;
    cin>>a>>b>>c;
    a=abs(a);b=abs(b);
    if(c<a+b) cout<<"NO";
    else{
        if((c-a+b)%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}