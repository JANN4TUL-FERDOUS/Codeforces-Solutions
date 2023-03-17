#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s1=0,s2=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n-2;i++){
       if(a[i]=='x' && a[i+1]=='x' && a[i+2]=='x')
            s1++;
    }
    cout<<s1;
    return 0;
}