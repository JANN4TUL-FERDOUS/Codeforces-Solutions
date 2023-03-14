#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x,y,s=0,z=0;
    cin>>x>>y;
    if(x==y) cout<<"0 "<<"6 "<<"0 ";
    else{
        if(x>y) {
            z=1;
            swap(x,y);
        }
        a=x;
        b=6-y+1;
        c=y-x-1;
        if(c%2!=0) s=1;
        if(z==0) cout<<a+c/2<<" "<<s<<" "<<b+c/2;
        else cout<<b+c/2<<" "<<s<<" "<<a+c/2;
    }
    return 0;
}