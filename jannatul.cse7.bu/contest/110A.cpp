#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int b=0,i;
    cin>> a;
    for(i=0;i<a.size();i++){
        if(a[i]=='4' || a[i]=='7') b++;


    }
    if(b==4 ||b==7) cout<<"YES\n";
    else  cout <<"NO\n";
    return 0;
}