#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,s1,s2;
    cin>>a>>b>>c>>d;
    s1=max(3*a/10,a-a*c/250);
    s2=max(3*b/10,b-b*d/250);
    if(s1==s2) cout<<"Tie";
    else if(s1>s2) cout<<"Misha";
    else cout<<"Vasya";
    return 0;
}