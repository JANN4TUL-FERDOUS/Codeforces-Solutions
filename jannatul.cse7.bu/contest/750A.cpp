#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,b,c=0,x=0,d;
    cin >>a>>b;
    d=240-b;
    for(i=5;i<=5*a;i=i+5){

        if(d<i){
            break;
        }
        d-=i;
        c++;
    }
    cout<<c;
    return 0;
}