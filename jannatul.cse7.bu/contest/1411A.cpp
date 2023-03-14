#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string a;
        int i,s=0;
        cin>>a;
        for(i=n-1;i>=0;i--){
            if(a[i]==')') s++;
            else break;
        }
        if(s>n/2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}