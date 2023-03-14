#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            a[i]=abs(a[i]);
        }
        for(i=0;i<n;i++){
            if(i%2) a[i]*=(-1);
        }
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}