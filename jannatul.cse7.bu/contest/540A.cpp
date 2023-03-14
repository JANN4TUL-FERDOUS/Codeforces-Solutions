#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s2=0,s1,i;
    string a,b;
    cin>>n;
    cin>>a>>b;
    for(i=0;i<n;i++){
        if(a[i]>b[i]) s1=10-a[i]+b[i];
        else s1=a[i]+10-b[i];
        s2+=min(abs(a[i]-b[i]),s1);
    }
    cout<<s2<<endl;
    return 0;
}