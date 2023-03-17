#include<iostream>
using namespace std;
int main(){
    int t;
    long n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n==1 || m==1 || n*m==4 ) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}