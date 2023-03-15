#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int s=0;
        for(i=n-1;i>=0;i--){
            for(j=i-1;j>=0;j--){
                if(a[i]>a[j]){
                    s++;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}