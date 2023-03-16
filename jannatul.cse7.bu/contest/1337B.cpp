#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int x,n,m;
       cin>>x>>n>>m;
       int n1=n,x1=x;
       while(n--){
            x=(x/2)+10;
       }
       if(x-m*10<=0) cout<<"YES\n";
       else {
            x1-=m*10;
            if(x1>0){
                while(n1--){
                    x1=(x1/2)+10;
                }
            }
            if(x1<=0) cout<<"YES\n";
            else cout<<"NO\n";
       }
    }
    return 0;
}