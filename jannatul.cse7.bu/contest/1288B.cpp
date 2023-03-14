#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,s=0,x=0;
        cin>>a>>b;
        while(b>0){
            s++;
            if(b%10==9) x++;
            b/=10;
        }
        if(x!=s) s--;
        cout<<a*s<<endl;
    }
    return 0;
}