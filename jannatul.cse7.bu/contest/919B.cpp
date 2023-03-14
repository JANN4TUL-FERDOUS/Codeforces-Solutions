#include<iostream>
#define ll long long
using namespace std;
int cal(ll l){
    int x=0;
    while(l!=0){
        x+=l%10;
        l/=10;
    }
    return x;
}
int main(){
    ll s,i;
    int a,y=0;
    cin>>a;
    for(i=19;;i+=9){
        if(cal(i)==10) y++;
        if(y==a){
            cout<<i<<endl;
            return 0;
        }
    }
}