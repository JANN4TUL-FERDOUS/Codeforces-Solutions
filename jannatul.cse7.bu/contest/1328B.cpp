#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long k,a[n],i,s=0,s1=1,s2=0;
        cin>>k;
        if(k==1){
            for(i=0;i<n-2;i++) cout<<"a";
            cout<<"bb\n";
        }
        else{
            while(k>s+s1){
                s+=s1;
                s2++;
                s1++;
            }
            //cout<<s1<<" "<<s2<<" "<<s<<" ";
            for(i=0;i<n;i++){
                if(i==n-2-s2 || i==n-k+s) cout<<"b";
                else cout<<"a";
            }
            cout<<endl;
        }
    }
    return 0;
}