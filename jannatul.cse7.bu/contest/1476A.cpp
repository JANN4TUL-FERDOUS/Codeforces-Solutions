#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,k,x;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n>k) k*=(n+k-1)/k;
        x=(k+n-1)/n;
        cout<<x<<endl;
    }
    return 0;
}