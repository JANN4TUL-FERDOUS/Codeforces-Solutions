#include<iostream>
using namespace std;
int main(){
    int n,t,i;
    cin >> n>>t;
    int a[n-1];
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1; ){
        i+=a[i];
        if(i==(t-1)){
            cout<<"YES\n";
            return 0;
        }

    }
    cout<<"NO\n";
    return 0;
}