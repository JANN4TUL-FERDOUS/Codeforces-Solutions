#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,ans=0,c=0;
    cin >>n;
    while(n--){
        cin >>a>>b;
        c-=a;
        c+=b;
        ans=max(c,ans);
    }
    cout <<ans<<endl;
    return 0;
}