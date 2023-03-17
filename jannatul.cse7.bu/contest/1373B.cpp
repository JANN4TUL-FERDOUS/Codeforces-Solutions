#include<iostream>
using namespace std;
int main(){
    int t;
    string a;
    cin>>t;
    while(t--){
        cin>>a;
        int s1=0,s2=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='0') s1++;
            else s2++;
        }
        s1=min(s1,s2);
        if(s1%2==0)cout<<"NET\n";
        else cout<<"DA\n";
    }
    return 0;
}