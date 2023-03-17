#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int x=a.length()-1;
        if(a[x]=='o') cout<<"FILIPINO\n";
        else if(a[x]=='u') cout<<"JAPANESE\n";
        else cout<<"KOREAN\n";
        }
    return 0;
}