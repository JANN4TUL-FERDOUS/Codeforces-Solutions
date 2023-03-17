#include<iostream>
using namespace std;
int main(){
    long long t,a,b,n,s;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        s=n/a;
        if(n%a<b) cout<<(s-1)*a+b<<endl;
        else  cout<<s*a+b<<endl;
    }
    return 0;
}