#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],y=0,b[n],s=0,x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    x=a[0];
    for(int i=1;i<n;i++){
        s+=a[i-1]-a[i];
        if(s<0) x-=s;
        if(x>b[n-1]){
            y=1;
            cout<<b[n-1];
            break;
        }
    }
    if(y==0)
    cout<<x;
    return 0;
}