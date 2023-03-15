#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>1){
            cout<<"23";
            for(int i=3;i<=n;i++) cout<<3;
            cout<<endl;
        }
        else cout<<"-1\n";
    }
    return 0;
}