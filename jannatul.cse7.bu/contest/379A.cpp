#include<iostream>
using namespace std;
int main(){
    int a,b,s,res=0;
    cin>>a>>b;
    res=a;
    while(a>=b){
        s=a/b;
        a=s+a%b;
        res+=s;

    }
    cout<<res<<endl;
    return 0;
}