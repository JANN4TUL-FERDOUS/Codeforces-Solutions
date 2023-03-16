#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,s=0,s1;
        cin>>a>>b>>c;
        if(a<b) swap(a,b);
        if(2*b<=a+c) cout<<b<<endl;
        else {
            s1=b;
            s=(a+c)/2;
            b-=s;
            if((a+c)%2) b++;
            s+=b/3;
            if(s>=a) cout<<a<<endl;
            else cout<<s<<endl;
        }
    }
    return 0;
}