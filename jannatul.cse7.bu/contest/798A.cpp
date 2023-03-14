#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0,i;
    string a;
    cin>>a;
    int n=a.length();
    for(i=0;i<(n+1)/2;i++){
        if(a[i]!=a[n-i-1]) s++;
        if(s>1) break;
    }
    if(s==1 || (n%2==1 && s==0)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}