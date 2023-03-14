#include<iostream>
using namespace std;
int main(){
    int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if((m-1+(n-1)*m==k)||(n-1+(m-1)*n==k)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}