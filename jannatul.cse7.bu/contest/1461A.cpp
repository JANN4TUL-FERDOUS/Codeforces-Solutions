#include<iostream>
using namespace std;
int main(){
    int t,n,k,x,y,z;
    cin>>t;
    while(t--){
        cin>>n>>k;
        x=n-k;
        y=x/3;
        while(k--) cout<<"a";
        while(y--) cout<<"bca";
        if(x%3==2) cout<<"bc";
        else if(x%3==1) cout<<"b";
        cout<<endl;
    }
    return 0;
}