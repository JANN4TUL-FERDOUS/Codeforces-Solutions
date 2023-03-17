#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) x++;
        }
        cout<<n-x<<endl;
    }
    return 0;
}