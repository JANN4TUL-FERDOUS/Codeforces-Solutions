#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,i;
        cin>>n>>d;
        int a[n],b[n],s1=0,s=0;
        for(i=0;i<n;i++) cin>>a[i];
        s1+=a[0];
        for(i=1;i<n;i++) {
            if(a[i]*i<=d){
                d-=(a[i]*i);
                s1+=a[i];
            }
            else{
                s1+=d/i;
                break;
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}