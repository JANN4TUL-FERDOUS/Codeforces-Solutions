#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],i,s=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]>a[0]) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}