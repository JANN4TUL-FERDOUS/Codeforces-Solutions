#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n) cout<<k-n<<endl;
        else if(n%2==k%2) cout<<"0\n";
        else cout<<"1\n";
    }
    return 0;
}