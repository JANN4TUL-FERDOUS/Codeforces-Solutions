#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0,s=0,j=0,k=0;
        cin>>n;
        int a[n],b[n],c[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) {
                s1+=a[i];
                b[j++]=a[i];
            }
            else if(a[i]<0) {
                s2-=a[i];
                c[k++]=a[i];
            }
            else s++;
        }
        if(s1==s2 || s==n) cout<<"NO\n";
        else{
            cout<<"YES\n";
            if(s1>s2){
                for(i=0;i<j;i++) cout<<b[i]<<" ";
                while(s--) cout<<"0 ";
                for(i=0;i<k;i++) cout<<c[i]<<" ";
            }
            else{
                for(i=0;i<k;i++) cout<<c[i]<<" ";
                while(s--) cout<<"0 ";
                for(i=0;i<j;i++) cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}