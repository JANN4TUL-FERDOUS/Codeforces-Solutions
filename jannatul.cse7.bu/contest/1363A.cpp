#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,m,i,j,s=0,s1=0,s2=0;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) s2++;
            else s1++;
        }
        if(s1==0 || (s2==0 && x%2==0) || (n==x && s1%2==0))
            cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}