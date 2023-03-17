#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int a[4]={6,8,4,2};
    cin>>n;
    if(n==0) cout<<"1";
    else{
        n%=4;
        cout<<a[n];
    }
    return 0;
}