#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) s1++;
            else s2++;
        }
        if(s1==n ||s2==n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}