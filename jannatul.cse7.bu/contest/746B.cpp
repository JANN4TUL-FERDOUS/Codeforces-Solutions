#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    string a;
    cin>>n>>a;
    int l=a.length();
    for(i=l-2;i>=0;i-=2) cout<<a[i];
    if(l%2) i=0;
    else i=1;
    for(;i<l;i+=2) cout<<a[i];
    return 0;
}