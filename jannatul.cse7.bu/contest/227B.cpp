#include<iostream>
using namespace std;
const int m=10e5+10;
int x[m];
int main(){
    long long n,i,j,x1=0,x2=0;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
        x[a[i]]=i;
    }
    int m;
    cin>>m;
    int b[m];
    for(i=1;i<=m;i++){
        cin>>b[i];
        x1+=x[b[i]];
        x2+=n-x[b[i]]+1;
    }
    cout<<x1<<" "<<x2;
    return 0;
}