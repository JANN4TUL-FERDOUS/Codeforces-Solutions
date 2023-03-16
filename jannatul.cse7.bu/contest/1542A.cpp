#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0;
        cin>>n;
        int a[2*n];
        for(i=0;i<n*2;i++){
            cin>>a[i];
            if(a[i]%2==0) s1++;
            else s2++;
        }
        if(s1==s2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}