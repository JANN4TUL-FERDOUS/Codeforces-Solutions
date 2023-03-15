#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3,b1,b2,b3,s1=0,s2=0,n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    s1=a1+a2+a3;
    s2=b1+b2+b3;
    if(s1%5==0) s1/=5;
    else s1=s1/5+1;
    if(s2%10==0) s2/=10;
    else s2=s2/10+1;
    if(s1+s2>n) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}