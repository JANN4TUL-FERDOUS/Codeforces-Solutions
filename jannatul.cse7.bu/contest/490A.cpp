#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,m=0,p=0,s=0,mi=0;
    int a[5000],b[5000],c[5000];
    cin>>t;
    int x[t];
    for(i=0;i<t;i++)cin>>x[i];
    for(i=0;i<t;i++){
        if(x[i]==1){
            a[p]=i+1;
            p++;
        }
        else if(x[i]==2){
            b[m]=i+1;
            m++;
        }
        else {
            c[s]=i+1;
            s++;
        }
    }
    mi=min(p,m);
    mi=min(mi,s);
    cout<<mi<<endl;
    for(i=0;i<mi;i++) cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<endl;
    return 0;
}