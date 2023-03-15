#include<iostream>
using namespace std;
int main(){
    int n,a,b,s;
    cin>>n>>a>>b;
    s=n-a;
    if(s-1>b) cout<<b+1;
    else cout<<s;
    return 0;
}