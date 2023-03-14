#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],j=0,s=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
               a[i]=0;
               break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0) s++;
    }
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    return 0;
}