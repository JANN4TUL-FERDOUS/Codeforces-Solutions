#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0;
    cin>> n;
    char c[1000];
    cin >> c;
    for(i=0;i<n;i++){
        if(c[i]>96) c[i]=c[i]-32;
    }
    sort(c,c+n);
    s=0;
    for(i=0;i<n-1;i++){
        if(c[i]!=c[i+1]) s++;
    }
    if(s==25) cout<<"YES\n";
    else cout <<"NO\n";
    return 0;
}