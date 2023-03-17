#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=x%4;
    if(a==1 || a==0  || a==3) cout<<abs(1-a)<<" "<<"A";
    else cout<<"1 B";
    return 0;
}