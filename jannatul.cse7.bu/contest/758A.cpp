#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,s=0;
    cin >>t;
    int a[t];
    for(i=0;i<t;i++) cin>>a[i];
    sort(a,a+t);
    for(i=0;i<t;i++){
        s+=a[t-1]-a[i];
    }
    cout <<s<<endl;
    return 0;
}