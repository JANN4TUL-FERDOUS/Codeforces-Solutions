#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=1,s2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) s++;
        else{
            if(s>s2) s2=s;
            s=1;
        }
    }
    cout<<max(s,s2);
    return 0;
}