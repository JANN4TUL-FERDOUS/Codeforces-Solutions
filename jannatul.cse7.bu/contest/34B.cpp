#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s=0,x=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<0){
            s-=a[i];
            x++;
            if(x==m) break;
        }
    }
    cout<<s;
    return 0;


}