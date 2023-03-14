#include<iostream>
using namespace std;
int main(){
    long long n,m,i,s=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        if(m%i==0 &&m/i<=n) s++;
    }
    cout<<s<<endl;
    return 0;
}