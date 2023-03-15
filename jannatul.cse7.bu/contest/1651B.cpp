#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    long long a[100],max=1000000000;
    cin>>t;
    a[0]=1;
    for(i=1;a[i-1]*3<=max;i++){
        a[i]=a[i-1]*3;
    }
    int s=i;
    while(t--){
        int n;
        cin>>n;
        if(n>s) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}