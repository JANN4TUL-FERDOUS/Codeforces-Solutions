#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b,s=0;
    cin>>a>>b;
    while(!(a==0 || b==0)){
       if(a==1 && b==1) break;
       if(a>b) {
            a-=2;
            b++;
       }
       else b-=2,a++;
       s++;
    }
    cout<<s<<endl;
    return 0;
}