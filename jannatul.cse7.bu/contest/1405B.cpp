#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s=0,x=0;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) x+=a[i];
            else{
                if(a[i]+x<0){
                    a[i]=abs(a[i]);
                    s+=a[i]-x;
                    x=0;
                }
                else x-=abs(a[i]);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}