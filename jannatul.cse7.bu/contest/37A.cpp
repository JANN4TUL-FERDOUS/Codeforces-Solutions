#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,a[n],s1=1,s2=1,s=1;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]) s1++;
        else {
            s2++;
            if(s<s1)s=s1;
            s1=1;
        }
    }
    if(a[n-1]==a[n-2]){
        if(s<s1) s=s1;
    }
    cout<<s<<" "<<s2<<endl;
    return 0;
}