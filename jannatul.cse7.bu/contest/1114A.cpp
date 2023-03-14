#include<iostream>
using namespace std;
int main(){
    int x,y,z,a,b,c,s=0;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(a>=x){
        a-=x;
        if(a+b>=y){
            if(a<y) {
                y-=a;
                a=0;
                b-=y;
            }
            else a-=y;
            if(a+b+c>=z) {
                s=1;
                cout<<"YES\n";
            }
        }
    }
    if(s==0) cout<<"NO\n";
    return 0;
}