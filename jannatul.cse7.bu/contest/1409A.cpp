#include<bits\stdc++.h>
using namespace std;
int main(){
    long t,i,a,b,s,x;
    cin >>t;
    for(i=0;i<t;i++){
        cin >> a >>b;
        s=abs(a-b);
        if(s%10==0) x=s/10;
        else x=s/10 +1;
        cout<< x<<endl ;
    }
    return 0;
}