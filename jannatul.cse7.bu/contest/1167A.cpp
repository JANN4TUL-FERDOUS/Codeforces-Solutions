#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,x=-1;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]=='8' && x==-1)
                x=i;
        }
        if(x==-1 || n-x<11) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}