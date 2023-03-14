#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int s=0,l1=a.length(),l2=b.length(),i;
    for(i=1;i<=min(l1,l2) ;i++){
        if(a[l1-i]==b[l2-i]) s++;
        else break;
    }
    cout<<l1-s+l2-s;
    return 0;
}