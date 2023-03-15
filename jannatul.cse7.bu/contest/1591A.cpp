#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=1,s2=0,s3=0,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i>0 && (a[i]==1 && a[i-1]==1)) s+=5;
            else if( a[i]==1) s+=1;
            if(i>0 && (a[i]==0 && a[i-1]==0)) s2=1;
        }
        if(s2==1) cout<<"-1\n";
        else cout<<s<<endl;
    }
    return 0;
}