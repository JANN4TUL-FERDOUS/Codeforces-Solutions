#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(n>2) cout<<(m)*2<<endl;
        else cout<<(n-1)*m<<endl;
    }
    return 0;
}