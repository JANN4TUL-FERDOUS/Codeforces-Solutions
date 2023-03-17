#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int l,s1=0,s2=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a') s1++;
        else s2++;
    }
    if(s1>s2) cout<<a.length();
    else cout<<s1+s1-1;
    return 0;
}