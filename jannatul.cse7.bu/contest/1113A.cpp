#include<iostream>
using namespace std;
int main(){
    int n,v,s=0,i=2;
    cin>>n>>v;
    if(n-1<=v) cout<<n-1;
    else {
        s=v;
        n=n-1-v;
        while(n--)s+=i++;
        cout<<s;
    }
    return 0;
}