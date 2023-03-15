#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,s=0,s1=0;
    cin>>n;
    if(n%2) {
        if(n==1) cout<<"3\n";
        else cout<<"1\n";
    }
    else{
        if(n==2) cout<<"4\n";
        else cout<<n-2<<endl;
    }
    return 0;
}