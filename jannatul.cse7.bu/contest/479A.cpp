#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,i;
    cin >>a >>b>>c;
    d=a+b+c;
    e=max(d,a*b*c);
    f=max(e,a*(b+c));
    g=max(f,a+(b*c));
    h=max(g,(a*b)+c);
    i=max(h,(a+b)*c);
    cout<<i<<endl;
    return 0;
}