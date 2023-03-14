#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,ans1,ans2;
    cin>> n;
    int a[n],b[n-1],c[n-2];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++) cin>>b[i];
    for(i=0;i<n-2;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans1=a[i];
            break;
        }
    }
    for(i=0;i<n-1;i++){
        if(b[i]!=c[i]){
            ans2=b[i];
            break;
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}