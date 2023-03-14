#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s=1,j=1;
        string a;
        cin>>a;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                j++;
            }
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]) s++;
        }
        if(j>s) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}