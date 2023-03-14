#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%k<2) cout<<n<<endl;
        else{
            x=k/2;
            y=n%k;
            if(y<x) cout<<n<<endl;
            else cout<<n-y+x<<endl;
        }
    }
    return 0;
}