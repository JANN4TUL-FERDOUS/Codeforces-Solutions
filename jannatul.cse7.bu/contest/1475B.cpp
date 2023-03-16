#include<iostream>
using namespace std;
int main(){
    int t;
    long n,n1,n2;
    cin>>t;
    while(t--){
        cin>>n;
        n1=n%2020;
        n2=n/2020;
        if(n1<=n2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}