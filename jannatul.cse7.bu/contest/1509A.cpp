#include<iostream>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],c[n];
        int j=0,k=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0) b[j++]=a[i];
            else c[k++]=a[i];
        }
        if(j>k){
            for(i=0;i<j;i++) cout<<b[i]<<" ";
            for(i=0;i<k;i++) cout<<c[i]<<" ";
        }
        else{
            for(i=0;i<k;i++) cout<<c[i]<<" ";
            for(i=0;i<j;i++) cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}