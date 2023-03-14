#include<iostream>
using namespace std;
int main(){
    int t,n,d;
    cin>>t;
    while(t--){
        int x=0;
        cin>>n>>d;
        while(n--){
          long long q,i,s;
          cin>>q;
          if(q%d==0) cout<<"YES\n";
          else{
                s=q%10;
                for(i=1;i<=9;i++){
                    if((d*i)%10==s){
                        x=i;
                        break;
                    }
                }
                if(d*i<q) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}