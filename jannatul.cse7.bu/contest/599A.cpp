#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d1,d2,d3,d,m1,m2,m3,m4;
    cin>>d1>>d2>>d3;
    m1=d1+d2+d3;
    m2=2*(d1+d2);
    m3=d1+d3+d3+d1;
    m4=d2+d3+d3+d2;
    d=min(m1,min(m2,min(m3,m4)));
    cout<<d;
    return 0;
}