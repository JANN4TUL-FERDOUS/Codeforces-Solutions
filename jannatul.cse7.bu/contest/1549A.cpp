#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        cout<<"2 ";
        if(a%2==0) cout<<a<<endl;
        else cout<<a-1<<endl;
    }
    return 0;
}