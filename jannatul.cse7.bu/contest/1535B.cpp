#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0;
        cin>>n;
        int a[n],b[n],j=0,m=n-1;
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2==0) b[j++]=a[i];
            else b[m--]=a[i];
        }
        for(i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(b[i],2*b[j])>1) s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}