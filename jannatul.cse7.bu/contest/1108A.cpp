#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        cout<<l1;
        if(l1==r2) cout<<" "<<l2<<endl;
        else cout<<" "<<r2<<endl;
    }
    return 0;
}