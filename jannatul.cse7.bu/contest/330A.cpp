#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    string a;
    int b[r]={0},d[c]={0};
    int k=0,x=0;
    int i,j,s1=0,s2=0;
    for(i=0;i<r;i++){
        cin>>a;
        for(j=0;j<c;j++){
            if(a[j]=='S'){
                b[i]=1;
                d[j]=1;
            }
        }
    }
    for(i=0;i<r;i++){
       if(b[i]==0) s1++;
    }
    for(j=0;j<c;j++){
        if(d[j]==0)
           s2++;
    }
    s1*=c;
    s1+=s2*(r-s1/c);
    cout<<s1<<endl;
    return 0;
}