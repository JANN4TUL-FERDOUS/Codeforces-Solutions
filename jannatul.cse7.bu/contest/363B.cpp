#include<iostream>
using namespace std;
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    long long min=0;
    int a[n],s=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) s+=a[i];
    min=s;
    for(int i=1;i<n-k+1;i++){
        s-=a[i-1];
        s+=a[i+k-1];
        if(min>s){
            min=s;
            ans=i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}