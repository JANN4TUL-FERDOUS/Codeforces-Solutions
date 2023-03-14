#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long a,b,c,s=0,s2=0;
       cin>>a>>b>>c;
       s=abs(b-c)+abs(c-1);
       if(s==a-1) cout<<"3\n";
       else if(s<a-1) cout<<"2\n";
       else cout<<"1\n";
    }
    return 0;
}