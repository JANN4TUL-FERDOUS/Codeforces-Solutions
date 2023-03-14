#include<bits/stdc++.h>
using namespace std;
int res(int c){
    int i=1,s=0;
    while(c>0){
        if(c%10>0){
            s+=(c%10)*i;
            i*=10;
        }
        c/=10;
    }
    return s;
}
int main(){
    long long a,b,s=0,c,s1=0,s2=0;
    cin>>a>>b;
    c=a+b;
    if(res(a)+res(b)==res(c)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}