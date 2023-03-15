#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n,m,i,s=0,j=0,k=0;
    cin>>n>>m;
    int y[n*m],z[m];
    while(n--){
        int a,b;
        cin>>a>>b;
        for(i=a;i<=b;i++){
            y[j++]=i;
        }
    }
    sort(y,y+j);
    z[k++]=y[0];
    for(i=1;i<j;i++){
        if(y[i]!=y[i-1]) z[k++]=y[i];
    }
    cout<<m-k<<endl;
    for(i=1;i<=m;i++){
        s=0;
        for(j=0;j<k;j++){
            if(i==z[j] ) break;
            s++;
            if(s==k) cout<<i<<" ";
        }
    }
    return 0;
}