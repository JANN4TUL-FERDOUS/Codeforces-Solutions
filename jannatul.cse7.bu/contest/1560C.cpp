#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,n,s=0,k,s1=0,s2=0,i,x;
        cin>>a;
        s=sqrt(a);
        if(s*s==a) cout<<s<<" "<<"1"<<endl;
        else{
            s++;
            s1=s*s;
            s2=s1-a+1;
            if(s2<=s) cout<<s<<" "<<s2<<endl;
            else{
               cout<<s-(s2-s)<<" "<<s<<endl;
            }
        }
    }
     return 0;
}