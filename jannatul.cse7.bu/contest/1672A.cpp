#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            s+=a[i]-1;
        }
        if(s%2) cout<<"errorgorn\n";
        else cout<<"maomao90\n";
    }
    return 0;
}