#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int i,s=0,l=a.length();
        if(l%2==1) cout<<"NO\n";
        else{
            int x=0;
            s=l/2;
            for(i=0;i<l/2;i++){
                if(a[i]!=a[s+i]){
                    x=1;
                    break;
                }
            }
            if(x==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
   }
    return 0;
}