#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,a[n],k,x,y;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        a[i]=y;
    }
    cin>>k;
    if(k>0) k--;
    for(i=1;i<=n;i++){
        if(a[i]==k){
            cout<<n-i;
            break;
        }
        else if(k<a[i]) {
            cout<<n-i+1;
            break;
        }
    }
    return 0;
}