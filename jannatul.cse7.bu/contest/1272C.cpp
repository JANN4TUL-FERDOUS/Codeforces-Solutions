#include<bits/stdc++.h>
using namespace std;
const int m=2*10e5+10;
long long a[m];
int main(){
    long long n,i,k,s=0,s1=0,j,s2=0;
    for(i=1;i<m;i++) a[i]=i+a[i-1];
    cin>>n>>k;
    string c;
    cin>>c;
    char b[k];
    for(i=0;i<k;i++) cin>>b[i];
    for(i=0;i<n;i++){
        s2=0;
        for(j=0;j<k;j++){
            if(c[i]==b[j]){
                s1++;
                break;
            }
            else s2++;
        }
        if(s2==k){
            if(s1>0) s+=a[s1];
            s1=0;
        }
    }
    if(s1>0) s+=a[s1];
    cout<<s<<endl;
    return 0;
}