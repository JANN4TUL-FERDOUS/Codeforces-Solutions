#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s1=0,s2=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) s1++;
        else s2++;
    }
    if(s2%2==1) cout<<s2;
    else cout<<s1;
    return 0;
}