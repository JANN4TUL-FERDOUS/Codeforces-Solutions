#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,i,s1=0,x[30]={0},s=0,j=0;
    string a;
    cin>>k>>a;
    char b[a.length()];
    for(i=0;i<a.length();i++){
        x[a[i]-96]++;
    }
    for(i=1;i<=26;i++){
        if(x[i]%k){
            s=1;
            break;
        }
        s1=x[i]/k;
        while(s1--) b[j++]='a'+i-1;
    }
    if(s==1) cout<<"-1";
    else {
        while(k--){
             for(i=0;i<j;i++) cout<<b[i];
        }
    }
    return 0;
}