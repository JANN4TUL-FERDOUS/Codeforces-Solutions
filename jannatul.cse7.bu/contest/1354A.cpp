#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a,b,c,d;
    cin>>t;
    while(t--){
        long long s1=0,s2=0;
        cin>>a>>b>>c>>d;
        if(a<=b) cout<<b<<endl;
        else if(c<=d) cout<<"-1\n";
        else{
            a-=b;
            s2=c-d;
            s1=a/s2;
            if(a%s2!=0) s1++;
            cout<<b+s1*c<<endl;
        }
    }
    return 0;
}