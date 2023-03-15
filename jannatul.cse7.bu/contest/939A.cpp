#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,x=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[a[a[i]]]==i){
            x=1;
            break;
        }
    }
    if(x==0)cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}