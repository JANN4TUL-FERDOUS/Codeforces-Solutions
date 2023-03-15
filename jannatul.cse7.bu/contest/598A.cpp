#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s1=0,s2=0,i=0;
        cin>>n;
        while(pow(2,i)<=n){
            s1+=pow(2,i);
            i++;
        }
        s2=n*(n+1)/2;
        cout<<s2-(s1*2)<<endl;
    }
    return 0;
}