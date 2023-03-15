#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        long long a[n],s=0,s3=9999999999,s1=0,s2=0,b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>s) s=a[i],s1=i+1;
            if(a[i]<s3) s2=i+1,s3=a[i];
        }
        cout<<min(s1,s2)<<" "<<max(s1,s2)<<endl;
    }
    return 0;
}