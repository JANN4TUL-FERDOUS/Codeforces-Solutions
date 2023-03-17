#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int s=0,s1=0,s2=n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]==1) break;
            else s1++;
        }
        for(i=n-1;i>=0;i--){
            if(a[i]==1) break;
            else s2--;
        }
        for(i=s1;i<s2;i++){
            if(a[i]==0) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}