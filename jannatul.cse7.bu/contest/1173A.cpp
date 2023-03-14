#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(a-b)<=c && c>0) cout<<"?";
    else{
        if(a==b) cout<<"0";
        else if(a>b) cout<<"+";
        else cout<<"-";
    }
    return 0;
}