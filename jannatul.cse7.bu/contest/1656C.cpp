#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,s=0,s1=0,s2=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==0) s++;
            else if(a[i]==1) s1++;
            if(i<n-1 && a[i+1]==a[i]+1) s2++;
        }
        if((s>0 && s1>0) || (s1>0 && s2>0)) cout<<"NO\n";
        else cout<<"YES\n";
        //cout<<s<<" "<<s1<<" "<<s2<<endl;
    }
    return 0;
}