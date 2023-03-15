#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if((n%10)%2!=0){
            for(int i=3;i<=n;i+=2){
                if(n%i==0) {
                    k--;
                    n+=i;
                    break;
                }
            }
        }
        cout<<n+k*2<<endl;
    }
    return 0;
}