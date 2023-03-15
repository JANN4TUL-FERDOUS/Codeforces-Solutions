#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,s=0;
    cin>>n;
    if(n%2==1) cout<<"0\n";
    else{
        s=n/2;
        s=(s-1)/2;
        cout<<s<<endl;
    }
    return 0;
}