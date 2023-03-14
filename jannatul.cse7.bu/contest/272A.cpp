#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,i,x=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        s+=a[i];
    }
    n++;
    for(i=1;i<=5;i++){
        if((s+i)%n!=1) x++;
    }
    cout<<x<<endl;
    return 0;
}