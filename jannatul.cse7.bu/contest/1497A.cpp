#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],j=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]) cout<<a[i]<<" ";
            else b[j++]=a[i];
        }
        for(int i=0;i<j;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}