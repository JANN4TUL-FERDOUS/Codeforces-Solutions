#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i=0,x=0,y=0,s=0,z=0;
        cin>>n;
        int a[n],j,k;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                s=1;
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(s==0) cout<<"NO\n";
    }
    return 0;
}