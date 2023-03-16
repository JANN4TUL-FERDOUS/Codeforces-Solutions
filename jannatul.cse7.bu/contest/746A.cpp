#include<iostream>
using namespace std;
int main(){
    int a,b,c,s1,s2,s=0;
    cin>>a>>b>>c;
    if(a*4>c) a=c/4;
    if(b*2>c) b=c/2;
    if(a*2>b) a=b/2;
     cout<<a+a*2+a*4;
    return 0;
}