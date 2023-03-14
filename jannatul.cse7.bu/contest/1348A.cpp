#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s1,s2,a,res;
    cin>> t;
    while(t--){
        s1=0;
        s2=0;
        a=1;
        cin>> n;
        s1=pow(2,n);
        for(int i=1;i<n/2;i++){
            a*=2;
            s1+=a;
        }
        for(int i=0;i<n/2;i++){
            a*=2;
            s2+=a;
        }
        res=s1-s2;
        cout<<res<<endl;
    }
    return 0;
}