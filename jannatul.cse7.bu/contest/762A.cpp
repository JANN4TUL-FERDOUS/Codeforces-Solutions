#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    long long n,k,s2,s=0,i;
    cin>>n>>k;
    s2=sqrt(n);
    for(i=1;i<=s2;i++){
        if(n%i==0) {
            v.push_back(i);
            if(n!=i*i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(k>v.size()) cout<<"-1\n";
    else cout<<v[k-1];
    return 0;
}