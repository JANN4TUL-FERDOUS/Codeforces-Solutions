#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long s=0,i=0,x=0;
        cin>>a;
        while(pow(2,i)<=a){
            s=pow(2,i);
            i++;
            if(s==a){
                x=1;
                break;
            }
        }
        if(x==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}