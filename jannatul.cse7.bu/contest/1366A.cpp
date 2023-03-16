#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a,b,s;
    cin>>t;
    while(t--){
        cin>>a>>b;
        s=(a+b)/3;
        cout<<min(a,min(b,s))<<endl;
    }
    return 0;
}