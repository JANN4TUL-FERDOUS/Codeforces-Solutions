#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];

    }
    sort(a,a+m);
    int least=a[n-1]-a[0];
    for(i=1;i<=m-n;i++){
        if((a[i+n-1]-a[i])<least) least=(a[i+n-1]-a[i]);
    }
    cout<<least;
    return 0;
}