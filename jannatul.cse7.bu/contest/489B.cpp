#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(j=0;j<m;j++) cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                s++;
                b[j]=1000;
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}