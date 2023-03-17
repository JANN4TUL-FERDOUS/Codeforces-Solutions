#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,i;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i+=2){
        if(!((a[i]=='a' && a[i+1]=='b') || (a[i]=='b' && a[i+1]=='a'))){
            if(a[i]=='a') a[i]='b';
            else a[i]='a';
            s++;

        }
    }
    cout<<s<<endl<<a;
    return 0;
}