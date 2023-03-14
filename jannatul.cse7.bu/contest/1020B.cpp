#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,a[n],s=0,s2=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        int x=a[i],b[n+10]={0};
        b[i]=1;
        while(1){
            b[x]++;
            if(b[x]==2){
                cout<<x<<" ";
                break;
            }
            x=a[x];
        }
    }
    return 0;
}