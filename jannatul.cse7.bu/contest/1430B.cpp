#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        cin>>n>>k;
        long long a[n],s;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[n-1]==0) cout<<"0\n";
        else if(k==0) cout<<a[n-1]-a[0]<<endl;
        else{
            s=a[n-1];
            for(i=n-2;i>=0;i--){
                if(k==0) break;
                else {
                    s+=a[i];
                    k--;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}