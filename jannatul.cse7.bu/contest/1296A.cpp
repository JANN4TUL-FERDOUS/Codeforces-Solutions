#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,s=0,e=0,o=0,a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
            if(a[i]%2==0) e++;
            else o++;
        }
        if(s%2!=0) cout<<"YES\n";
        else{
            if(o>0 && e>0) cout<<"Yes\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}