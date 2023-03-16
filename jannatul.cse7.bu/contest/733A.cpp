#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i,l=a.length(),s1=0,s=0,s2=0;
    for(i=0;i<l;i++){
        s1++;
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y'){
            if(s1>s) s=s1;
            s1=0;
        }
    }
    cout<<max(s,s1+1)<<endl;
    return 0;
}