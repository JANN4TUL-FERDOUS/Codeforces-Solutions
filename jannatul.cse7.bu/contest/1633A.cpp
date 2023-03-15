#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s=0;
        cin>>n;
        if(n%7==0) cout<<n<<endl;
        else {
            int s=n%7;
            if((n/10)%10==((n-s)/10)%10) cout<<n-s<<endl;
            else cout<<n+(7-s)<<endl;
        }
    }
    return 0;
}