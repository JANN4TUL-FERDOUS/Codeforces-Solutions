#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,a[10][10];
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][0]=1;
            a[0][j]=1;
        }
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n-1][n-1];
    return 0;
}