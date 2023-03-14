#include<iostream>
using namespace std;
int main(){
    int s,a1,a2,b1,b2;
    cin>>s>>a1>>a2>>b1>>b2;
    if(s*a1+2*b1>s*a2+2*b2) cout<<"Second\n";
    else if(s*a1+2*b1<s*a2+2*b2) cout<<"First\n";
    else cout<<"Friendship\n";
    return 0;
}