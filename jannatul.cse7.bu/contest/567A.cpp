#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
    for(i=1;i<n-1;i++){
        cout<<min(a[i]-a[i-1],a[i+1]-a[i])<<" ";
        cout<<max(a[i]-a[0],a[n-1]-a[i])<<endl;
    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0];
    return 0;
}