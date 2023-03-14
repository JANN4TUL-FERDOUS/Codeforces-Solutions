#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,x,y,s1=0;
    cin>>s>>n;
    int a[n],b[n],i=0,c[n];
    for(int j=0;j<n;j++){
        cin>>x>>y;
        if(s>x) {
            s+=y;
            s1++;
        }
        else{
            a[i]=x;
            c[i]=x;
            b[i]=y;
            i++;
        }
    }
    sort(c,c+i);
    for(int j=0;j<i;j++){
        if(s>c[j]){
            for(int k=0;k<i;k++){
                if(c[j]==a[k]){
                    a[k]=-1;
                    s+=b[k];
                    s1++;
                }
            }
        }
        else break;
    }
    if(s1==n) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}