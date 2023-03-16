#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,s1=0,s2=0,s=0,s3=0,s4=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+n);
        s-=a[n-1];
        double x=(double)s/(n-1);
        printf("%.9lf\n",x+a[n-1]);
    }

    return 0;
}