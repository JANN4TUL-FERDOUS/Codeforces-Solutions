#include<iostream>
using namespace std;
int main(){
    int n1,n,k;
    cin>>n>>k;
    int a[n],s=0;
    for(int i=0;i<n;i++) cin>>a[i];
    n1=n;
    for(int i=0;i<n-1;i++){
        int s1=a[i]+a[i+1];
        if(s1<k){
            a[i+1]+=k-s1;
            s+=k-s1;
        }
    }
    cout<<s<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}