#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >>a>>b;
    if(a>b){
        c=b;
        d=a;
    }
    else {
        c=a;d=b;
    }
    cout<<c<<" "<<(d-c)/2;

   return 0;
}