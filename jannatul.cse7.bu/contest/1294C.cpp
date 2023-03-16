#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b=0,i,x,c,d,j;
        cin>>a;
        x=sqrt(a);
        for(i=2;i<=x;i++){
            if(a%i==0 && a/i!=i){
                c=a/i;
                d=sqrt(c);
                for(j=2;j<=d;j++){
                    if(j!=i && c%j==0 && (c/j!=j && c/j>1)){
                        cout<<"YES\n"<<i<<" "<<j<<" "<<c/j<<endl;
                        b=1;
                        break;
                    }
                }
                break;
            }
        }
        if(b==0) cout<<"NO\n";
    }
    return 0;
}