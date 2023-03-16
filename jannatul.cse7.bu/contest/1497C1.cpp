#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%2) cout<<"1 "<<n/2<<" "<<n/2;
        else{
            if((n/2)%2) cout<<"2 "<<n/2-1<<" "<<n/2-1;
            else cout<<n/4<<" "<<n/4<<" "<<n/2;
        }
        cout<<endl;
    }
    return 0;
}