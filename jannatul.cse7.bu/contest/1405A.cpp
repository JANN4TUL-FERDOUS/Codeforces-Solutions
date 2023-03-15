#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=n-1;i>=0;i--) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}