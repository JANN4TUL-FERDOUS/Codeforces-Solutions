#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0) s=a[i];
            else s=s&a[i];
        }
        cout<<s<<endl;
    }
    return 0;
}