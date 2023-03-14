#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s=0,n,k,s1=0,s2=0,s3=0;
    cin>>n>>k;
    s1=n*2+k-1;s2=n*5+k-1;s3=n*8+k-1;
    cout<<s1/k+s2/k+s3/k;
    return 0;
}