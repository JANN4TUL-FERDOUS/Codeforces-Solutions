#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,i,s=0,x=0;
    int a[12];
    cin>>k;
    for(i=0;i<12;i++) cin>>a[i];
    if(k==0){
        cout<<"0";
        return 0;
    }
    sort(a,a+12);
    for(i=11;i>=0;i--){
        s+=a[i];
        x++;
        if(s>=k){
            cout<<x;
            return 0;
        }

    }
    cout<<"-1";
    return 0;
}