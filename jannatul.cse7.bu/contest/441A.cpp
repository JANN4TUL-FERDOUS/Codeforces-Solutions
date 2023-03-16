#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,j=0,i;
    cin>>n>>k;
    int a[n];
    for(i=1;i<=n;i++){
        int x,y,s=0;
        cin>>x;
        while(x--){
            cin>>y;
            if(y<k) s=1;
        }
        if(s==1) a[j++]=i;
    }
    cout<<j<<endl;
    for(i=0;i<j;i++) cout<<a[i]<<" ";
    return 0;
}