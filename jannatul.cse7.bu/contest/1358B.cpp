#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],x,y=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int s=0;
        for(i=n-1;i>=0;i--){
            if(a[i]<=i+1){
                s=1;
                cout<<i+2<<endl;
                break;
            }
        }
        if(s==0)cout<<"1"<<endl;
    }
    return 0;
}