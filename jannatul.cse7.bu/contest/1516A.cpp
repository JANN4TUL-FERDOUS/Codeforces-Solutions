#include<iostream>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],x;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(k<1) break;
            x=min(a[i],k);
            a[i]-=x;
            k-=x;
            a[n-1]+=x;
    }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}