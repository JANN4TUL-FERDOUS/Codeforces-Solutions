#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t,n;
    ll s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        ll a[n],s1=0,i,res=n;
        for(i=0;i<n;i++){
            cin>>a[i];
            s1+=a[i];
        }
        sort(a,a+n);
        if(a[n-1]<s) cout<<"0\n";
        else{
            i=0;
            while(s1/n<s){
                s1-=a[i];
                i++;
                n--;
            }
            cout<<res-i<<endl;
        }
    }
    return 0;
}