#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,s=0,x=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++){
            s=a[i];
            if(a[i]>k) break;
            while(s<k){
                x++;
                s+=a[0];
                if(s>k) x--;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}