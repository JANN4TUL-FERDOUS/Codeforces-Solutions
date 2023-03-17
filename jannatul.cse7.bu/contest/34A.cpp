#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,i,k1=0,x,y,k2=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    s=abs(a[0]-a[n-1]);
    x=a[0];y=a[n-1];
    for(i=1;i<n;i++){
        int z=abs(a[i]-a[i-1]);
        if(z<s){
            s=z;
            x=a[i-1];
            y=a[i];
        }
    }
    if(x==a[0] && y==a[n-1]) cout<<"1 "<<n;
    else{
        for(i=0;i<n;i++){
            if(a[i]==x && a[i+1]==y ){
              cout<<i+1<<" "<<i+2;
              break;
            }
        }
    }
    return 0;
}