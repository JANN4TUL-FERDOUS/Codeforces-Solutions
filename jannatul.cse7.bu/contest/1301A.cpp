#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int x=0,l=a.length();
        for(int i=0;i<l;i++){
            if(c[i]!=a[i] && c[i]!=b[i]) {
                x=1;
                break;
            }
        }
        if(x==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}