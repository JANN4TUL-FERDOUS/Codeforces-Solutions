#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,l;
        string a;
        cin>>n>>a;
        for(i=0;i<n;i++){
            if(a[i]=='U') a[i]='D';
            else if(a[i]=='D') a[i]='U';
        }
        cout<<a<<endl;
    }
    return 0;
}