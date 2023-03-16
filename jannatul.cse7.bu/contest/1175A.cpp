#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long s=0,n,k;
        cin>>n>>k;
        while(n!=0){
            if(n%k) {
                s+=n%k;
                n-=n%k;
            }
            else{
                s++;
                n/=k;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}