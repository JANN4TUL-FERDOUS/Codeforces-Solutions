#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,s1=0,s2=0;
        cin>>a>>b;
        s1=abs(a-b);
        s2=s1/5;
        s1%=5;
        if(s1>0){
            if(s1==1 || s1==2) s2++;
            else s2+=2;
        }
        cout<<s2<<endl;
    }
    return 0;
}