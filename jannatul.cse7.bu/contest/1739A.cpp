#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if((n==2 && m==3 )|| (m==2 && n==3)|| (n==3 && m==3)) cout<<(n+1)/2 <<" "<<(m+1)/2<<endl;
        else cout<<"1 1\n";
    }
    return 0;
}