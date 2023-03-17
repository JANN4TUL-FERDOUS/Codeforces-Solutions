#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    int s1=0,s2=0;
    string a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='0') s1++;
        else s2++;
    }
    cout<<abs(s1-s2);
    return 0;
}