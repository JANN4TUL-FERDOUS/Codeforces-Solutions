#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0,s1=0,s2=0,a[7],x=0;
    cin>>n;
    for(i=0;i<7;i++) {
        cin>>a[i];
        s1+=a[i];
        if(s1>=n && s==0) s=i+1;
    }
    if(s==0){
        s2=n%s1;
        if(s2==0){
            for(i=6;i>=0;i--){
                if(a[i]!=0){
                    s=i+1;
                    break;
                }
            }
        }
        else{
            i=0;
            while(s2>0){
                s2-=a[i++];
            }
            s=i;
        }
    }
    cout<<s<<endl;
    return 0;
}