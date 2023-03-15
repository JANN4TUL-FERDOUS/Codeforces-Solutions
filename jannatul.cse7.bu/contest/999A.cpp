#include<iostream>
using namespace std;
int main(){
    int n,k,i,s=0,x=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=k && x==0) s++;
        else x=1;
    }
    for(i=n-1;i>=0;i--){
        if(s==n || a[i]>k) break;
        s++;
    }
    cout<<s<<endl;
}