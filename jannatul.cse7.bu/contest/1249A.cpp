#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s=0,a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<2){
                s++;
                break;
            }
        }
        if(s==0) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}