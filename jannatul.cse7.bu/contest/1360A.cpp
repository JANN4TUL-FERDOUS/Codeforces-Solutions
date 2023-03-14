#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,c,d,i,b;
    cin>>t;
    for(i=0;i<t;i++){
        cin >>a>>b;
        if(a>b) swap(a,b);
        a=max(a*2,b);
        cout<<a*a<<endl;
    }
    return 0;

}