#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,s=0;
        long long a,b,c,d,s1=0,s2=0;
        cin>>a>>b>>c>>d;
        s1=a*d;
        s2=b*c;
        if(s1==s2) cout<<"0\n";
        else if(s1*s2==0 || (s1%s2==0 || s2%s1==0)) {
                cout<<"1\n";
        }
        else cout<<"2\n";

    }
    return 0;
}