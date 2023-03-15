#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<"-1\n";
    else{
        if(n%2) cout<<n-1;
        else cout<<n;
        cout<<" 2";
    }
    return 0;
}