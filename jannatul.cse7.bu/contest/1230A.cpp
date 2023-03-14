#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],s=0;
    for(int i=0;i<4;i++) {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0){
        sort(a,a+4);
        if(a[3]==a[0]+a[1]+a[2] || a[3]+a[0]==a[2]+a[1]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
}