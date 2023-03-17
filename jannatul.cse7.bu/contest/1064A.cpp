#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    int s=a[0]+a[1];
    if(s>a[2]) cout<<"0\n";
    else cout<<a[2]-s+1;
    return 0;
}