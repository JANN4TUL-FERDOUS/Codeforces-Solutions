#include<iostream>
using namespace std;
int gcd(int x,int y){
    int r;
    while((r=x%y)!=0){
        x=y;
        y=r;
    }
    return y;
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    while(1){
        n-=gcd(n,a);
        if(n==0){
            cout<<"0";
            break;
        }
        n-=gcd(n,b);
        if(n==0){
            cout<<"1";
            break;
        }
    }

    return 0;
}