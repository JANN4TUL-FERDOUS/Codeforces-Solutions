#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r,s,i,k=0;
    cin>>l>>r;
    while(l<=r){
        k=0;
        int a[10]={0};
        s=l;
        while(s>0){
            int x=s%10;
            a[x]++;
            if(a[x]>1){
                k=1;
                break;
            }
            s/=10;
        }
        if(k==0){
            cout<<l<<endl;
            break;
        }
        l++;
    }
    if(l>r) cout<<"-1\n";
    return 0;
}