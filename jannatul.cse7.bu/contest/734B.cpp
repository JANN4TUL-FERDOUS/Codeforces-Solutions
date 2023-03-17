#include<bits/stdc++.h>
using namespace std;
int main(){
    long s,k1,k2,k3,k4,k;
    cin>>k1>>k2>>k3>>k4;
    k=min(k1,k3);
    k=min(k,k4);
    k1-=k;
    k1=min(k1,k2);
    s=256*k+k1*32;
    cout<<s;
    return 0;
}