#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,e;
    int x[2];
    cin>>a;
    if(a>0) cout<<a;
    else {
        b=(a%10);
        c=a/10;
        d=(c%10);
        e=(c-d)+b;
        if(c>=e) cout<<c;
        else cout<<e;
    }
    return 0;
}