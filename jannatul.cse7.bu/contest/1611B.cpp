#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,s;
        cin>>a>>b;
        s=(a+b)/4;
        cout<<min(min(a,b),s)<<endl;

    }
    return 0;
}