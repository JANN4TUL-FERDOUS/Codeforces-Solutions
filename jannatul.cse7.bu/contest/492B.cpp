#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    long long l;
    cin>>n>>l;
    long long a[n],b[n],i=0,j=0;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long long x=max(a[0],l-a[n-1]);
    if(n==1) printf("%.10lf",(double)x);
    else{
        for(i=1;i<n;i++){
            b[j++]=a[i]-a[i-1];
        }
        sort(b,b+j);
        x=max(2*x,b[j-1]);
        printf("%.10lf\n",x/2.0);
    }
    return 0;
}