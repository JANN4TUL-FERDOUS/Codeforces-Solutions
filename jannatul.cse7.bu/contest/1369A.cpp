#include<iostream>
using namespace std;
int main(){
    int t,i;
    long a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a%4==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}