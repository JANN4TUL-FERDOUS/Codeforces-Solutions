#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    int a[m+1]={0};
    while(n--){
        int x,y;
        cin>>x;
        while(x--){
            cin>>y;
            a[y]++;
        }
    }
    int s=0;
    for(i=1;i<=m;i++){
        if(a[i]>0) s++;
    }
    if(s==m) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}