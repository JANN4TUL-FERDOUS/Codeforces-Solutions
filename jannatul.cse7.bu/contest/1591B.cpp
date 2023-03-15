#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,s2=0,s3=0,i;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(s<a[i]) s=a[i];
        }
        s3=a[n-1];
        s2=0;
        for(i=n-1;i>=0;i--){
            if(s3<a[i]){
                s3=a[i];
                s2+=1;
            }
            if(a[i]==s) {
                cout<<s2<<endl;
                break;
            }
        }
    }
    return 0;
}